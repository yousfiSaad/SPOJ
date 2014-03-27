//	yousfi.saad@gmail.com
//  www.spoj.com/problems/TRICOUNT/

var res = [];
res[0] = 1;
for (var h = 2; h <= 1000000; h++) {
	var i = h - 1;
	res[i] = res[i - 1];
	res[i] += h;
	var ht = h-1;
	res[i] += ht*(ht+1)/2;
	if (ht % 2) {
		var ma = (ht + 1) / 2;
		res[i] += ma;
		res[i] += ma * (ma - 1);
	} else {
		res[i] += (ht/2 * (ht/2 + 1));
	}
}
console.log(res);
