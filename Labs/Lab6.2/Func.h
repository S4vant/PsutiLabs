using namespace std;
void Add(double* m, int n)
{
	cout << "Заполните массив :" << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "-ый элемент:";
		cin >> m[i];
	}
}
void Out(double* m, int n)
{
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) {
		cout << " " << m[i] << endl;
	}
}
void Max(double* m, int n) {
	int max = 0;
	max = m[0];
	for (int i = 0; i < n; i++)
		if (max < m[i]) {
			max = m[i];
		}
	cout << "Максимальный элемент: " << max << endl;
}
void Pro(double* m, int n) {
	int p1 = -1;
	int p2 = -1;
	for (int i = 0; i < n; i++) {
		if (m[i] == 0)
		{
			p1 = i;
            break;
		}
	}
    for (int i = p1+1; i < n; i++) {
		if (m[i] == 0)
		{
			p2 = i;
            break;
		}
	}
	if (p2 != -1 && p1 != -1 && p1+1<p2)
    {
        int pro = 1;
		for (int i = p1+1; i < p2; i++)
		{
			pro *= m[i];
		}
    	cout << "Произведение между первым и вторым нулевыми элементами: " << pro << endl;
    }
    {
        cout << "Недостаточно нулей "<< endl;
    }
    }
void Array(double* m, int n) {
	cout << "Преобразованный массив: ";
	for (int i = 0; i < n; i++)
		if (i % 2) {
			cout << m[i] << " ";
		}
	for (int i = 0; i < n; i++)
		if (i % 2 == false) {
			cout << m[i] << " ";
		}
}