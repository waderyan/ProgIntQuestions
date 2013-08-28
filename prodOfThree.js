

function findLargestProductOfThree(lst) {
    if (lst < 3) {
        return null;
    }

    var LARGEST_NUM = Math.pow(10, 6);

    var max1 = -LARGEST_NUM,
        max2 = -LARGEST_NUM,
        max3 = -LARGEST_NUM,
        min1 = LARGEST_NUM,
        min2 = LARGEST_NUM;

    lst.forEach( function (ele) {
       if (ele > max1) {
            max3 = max2;
            max2 = max1;
            max1 = ele;
        } else if (ele > max2) {
            max3 = max2;
            max2 = ele;
        } else if (ele > max3) {
            max3 = ele;
        }
    });

    lst.forEach( function (ele) {
         if (ele < min1) {
            min2 = min1;
            min1 = ele;
        } else if (ele < min2) {
            min2 = ele;
        } 
    });

    return Math.max(max1 * max2 * max3, min1 * min2 * max1);
}


var testCases = {
    threePos: [1, 2, 3], // 6
    threeNeg: [-1, -2, -3], // -6
    morePos: [1, 2, 3, 4, 5], // 60
    moreNeg: [-1, -2, -3, -4, -5], // -6
    mixedSmall: [-1, 2, 3], // -6
    mixedMed: [-1, -2, 3, 4, 5, 6, 7], // 210
    mixedLarge: [-5, -4, 0, 1, 2], // 40
    zero: [-9, -8, -5, 0], // 0
    zeroTwo: [-1, -2, -4, -5, 0, 0] // 0
}

function assert(condition) {
    console.log((condition ? "PASSED" : "FAILED"));
}


assert(findLargestProductOfThree(testCases.threePos) == 6);
assert(findLargestProductOfThree(testCases.threeNeg) == -6);
assert(findLargestProductOfThree(testCases.morePos) == 60);
assert(findLargestProductOfThree(testCases.moreNeg) == -6);
assert(findLargestProductOfThree(testCases.mixedSmall) == -6);
assert(findLargestProductOfThree(testCases.mixedMed) == 210);
assert(findLargestProductOfThree(testCases.mixedLarge) == 40);
assert(findLargestProductOfThree(testCases.zero) == 0);
assert(findLargestProductOfThree(testCases.zeroTwo) == 0);









