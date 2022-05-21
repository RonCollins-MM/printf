# printf
Collaborative ALX project where we create our own 'printf' function.

Authors: Roncollins Muriuki && Lyrn Mukami

<b>REQUIREMENT</b>
To create a custom <i>_printf</i> function that can handle variable arguments as well as format specifiers, similar to standard <i>printf</i> function.

<b>PROGRESS</b>
The printf created thus far follows the following pseudocode:
Assuming passed string is not null:
<ol>
	<li>Begin iterating through the string from first character, one character at a time.</li>
	<li>If the character is a '%':
		<ol type="i">
		<li>Ignore this character and go to next char</li>
		<li>Process the next char as below:</li>
		<table>
			<tr>
				<th>Char after % </th>
				<th>Interperetation</th>
			</tr>
			<tr>
				<td>c</td>
				<td>Print a single char</td>
			</tr>
			<tr>
				<td>s</td>
				<td>Print a String as passed</td>
			</tr>
		</table>
		</ol>
	</li>
	<li>Otherwise, print the char and go to next char.</li>
	<li>If NULL string terminator is encountered, stop iterating.</li>
	<li>Return total number of chars printed.</li>
</ol>
The above is implemented in the file 'printf.c'.
The Test directory contains our own test files for testing our function. You may use or create your own.

(Refer to individual files and commits for more details)
