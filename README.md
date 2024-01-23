<h1>Run-C-Files</h1>

<p>This repository contains a simple script that compiles C or C++ files with a single command, 'runc'. The 'g++' compiler should be installed beforehand.</p>

<h2>Steps</h2>

<ol>
  <li>Copy and paste the compiled file from the repository into a separate folder.</li>
  <li>Add the folder to the environment variables.</li>
  <li>Use the 'runc filename.c' command to compile the file.</li>
  <li>The output executable file will be stored in the same directory.</li>
</ol>

<p>To change the 'runc' command to your choice, such as 'pythonc' or 'runcpp', compile the 'run-c-files.cpp' main script file and set its name of your choice. For example, copy and paste this command in your terminal:</p>

<pre>
g++ run-c-files.cpp -o your_choice_command_name
</pre>