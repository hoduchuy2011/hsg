import sublime
import sublime_plugin
from datetime import datetime

class GenerateCppTemplateCommand(sublime_plugin.TextCommand):
	def run(self, edit):
		# 1. Get the current time
		current_time = datetime.now().strftime("%Y-%m-%d %H:%M:%S")

		# 2. Define the template
		# Note: We use {{ and }} for C++ code blocks, and {current_time} for the python variable
		template = f"""//Author: Lunaris
//Timestamp: {current_time}
#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define all(x) x.begin(), x.end()

using namespace std;

void open(string s)
{{
	if(fopen((s + ".INP").c_str(), "r"))
	{{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}}
signed main() 
{{	
	open("");

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\\n";
	return 0;
}}"""

		# 3. Replace the word "open" with the template
		for region in self.view.sel():
			# Calculate the region of the 4 characters before the cursor
			# because "open" is 4 letters long
			start_point = region.begin() - 4
			if start_point < 0: start_point = 0
			
			replace_region = sublime.Region(start_point, region.begin())
			
			# Double check that the text is actually "open" before replacing
			if self.view.substr(replace_region) == "open":
				self.view.replace(edit, replace_region, template)
			else:
				self.view.insert(edit, region.begin(), template)