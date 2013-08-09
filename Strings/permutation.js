
function PermGenerator () {
	this.perms = [];
};

PermGenerator.prototype.permutation = function(word) {
	this.permute("", word);
}

PermGenerator.prototype.permute = function(prefix, str) {
	var n = str.length;
	if (!n) {
		this.perms.push(prefix);
	} else {
		for (var i = 0; i < n; i++) {
			this.permute(prefix + str[i], 
				str.substr(0, i) + str.substr(i+1, n)
			);
		}
	}
}















