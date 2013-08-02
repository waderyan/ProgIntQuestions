
// TODO test and document.

function PrefixReversalSorter() {}


PrefixReversalSorter.prototype.flip = function(startIndex, lst) {
	var i,
		j,
		length = lst.length,
		tmp;

	for (i = startIndex, j = length -1; i < j; i++, j--) {
		tmp = lst[i];
		lst[i] = lst[j];
		lst[j] = tmp; 
	}

	return lst;
}

PrefixReversalSorter.prototype.findLargest = function(startIndex, lst) {
	var i,
		length = lst.length,
		largest= 0;

	for (i = startIndex; i < length; i++) {
		if (lst[i] > largest) {
			return i;
		}
	}

	return;
}

PrefixReversalSorter.prototype.sort = function(lst) {
	var TOP_OF_LST = length - 1,
		BOT_OF_LST = 0,
		flipper,
		length = lst.length,
		i;

	for (i = 0; i < length; i++) {
		if ( this.findLargest(i, lst) == BOT_OF_LST ) {
			continue;
		} else if ( this.findLargest(i, lst) == TOP_OF_LST ) {
			flip(i, lst);
		} else {
			flipper = this.findLargest(i, lst);
			flip(flipper - 1, lst);
			flip(i, lst);
		}
	}
}






