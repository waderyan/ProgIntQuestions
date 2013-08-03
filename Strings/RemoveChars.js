
/**
* Removes characters from a string
* @param {string} str
* @param {string} remove - string with characters to remove
* @return {string}
*/
function remove(str, remove) {
	var	toRemove = {},
		src,
		dst = 0,
		newStr = '';

	for (src = 0; src < remove.length; src++) {
		toRemove[remove[src]] = true;
	}

	for (src = 0; src < str.length; src++) {
		if (!(str[src] in toRemove)) {
			newStr += str[src];
		}
	}

	return newStr;
}

/**
* Tests remove function
*/
function testRemove() {

	function assert(condition) {
		console.log(condition ? "Success!" : "Failure");
	}

	// Remove one character
	assert(remove('abc', 'a') == 'bc');
	// Remove more than one character
	assert(remove('bob', 'b') == 'o');
	// Remove characters in various places
	assert(remove('telephone', 'tpe') == 'lhon');
	// Remove no characters
	assert(remove('human', 'z') == 'human');
	// Remove string is larger than string to be modified
	assert(remove('z', 'abcdefghijklmn') == 'z');
	// Remove no characters
	assert(remove('a', 'bc') == 'a');
	// Remove all characters
	assert(remove('abc', 'abc') == '');
	// Non alpha-numeric characters
	assert(remove('?d*09$$', '19828*?') == 'd0$$');
}