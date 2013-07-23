
function mergeSort(lst) {
	if (lst.length == 1 || lst.length == 0) {
		return lst;
	}

	var frontHalf = lst.slice(0, lst.length / 2);
	var backHalf = lst.slice((lst.length / 2) + 1, lst.length - 1);

	return merge(mergeSort(frontHalf), mergeSort(backHalf));
}

function merge(lst1, lst2) {

	var result = [];

	while (lst1.length != 0 && lst2.length != 0) {
		var e1 = lst1.slice(0);
		var e2 = lst2.slice(0);

		if (e1 < e2) {
			result.push(e1);
			lst1 = lst1.slice(1);
		} else if (e2 < e1) {
			result.push(e2);
			lst2 = lst2.slice(1);
		} else {
			result.push(e1);
			result.push(e2);
			lst1 = lst1.slice(1);
			lst2 = lst2.slice(1);
		}
	}

	if (lst1.length != 0) {
		result.concat(lst1);
	} else if (lst2.length != 0) {
		result.concat(lst2);
	}

	return result;
}