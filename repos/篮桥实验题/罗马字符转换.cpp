"IVXLCDM"
"I", "V", "X", "L", "C", "D", "M"""

char a[7] = {"I", "V", "X", "L", "C", "D", "M"};
int b[7] = {1, 5, 10, 50, 100, 500, 1000};

int romanToInt(string s) {
	int an = 0;
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < 8; j++) {
			{
				b[j] = -b[j];
			}
			if (s[i] = a[j]) {
				an += b[j];
			}
		}

	}
	return an;

}