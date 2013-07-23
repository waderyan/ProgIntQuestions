
function binarySearchRec(lst, low, high, target) {
	if (low > high) {
		return -1;
	}

	var mid = (high + low) / 2;

	if (lst[mid] == target) {
		return mid;
	} else if (list[mid] < target) {
		return binarySearchRec(lst, mid + 1, high);
	} else {
		return binarySearchRec(lst, low, mid -1);
	}
}

function binarySearchMid(lst, target) {
	return binarySearchRec(lst, 0, lst.length -1, target);
}

function binarySearch(lst, target) {
	var low = 0;
	var high = lst.length - 1;

	while (low <= high) {
		var mid = (high + low) / 2;

		if (lst[mid] == target) {
			return mid;
		} else if (list[mid] < target) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return -1;
}

function binarySearchFirstOccurence(lst, target, position) {
	var low = 0;
	var high = lst.length - 1;

	var result = -1;
	while (low <= high) {
		var mid = (high + low) / 2;

		if (lst[mid] == target) {
			result = mid;
			if (position == 'high') {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		} else if (lst[mid] < target) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return result;
}


function howManyN(lst, target) {
	lst.sort(); // NlogN

	return binarySearchFirstOccurence(lst, target, 'high') - binarySearchFirstOccurence(lst, target, 'low');
}

function assert(condition) {
	if (condition) {
		console.log("Success!");
	} else {
		console.log("Failure!");
	}
}

function testHowManyN() {
	var lst = [1, 2, 3];
	assert(howManyN(lst, 1) == 1);
	lst.push(1);
	assert(howManyN(lst, 1) == 1);
	lst.push(1);
	assert(howManyN(lst, 1) == 2);
	lst.push(1);
	assert(howManyN(lst, 1) == 3);
}











