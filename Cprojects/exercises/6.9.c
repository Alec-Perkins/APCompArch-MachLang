// Exercise 6.9
// A. Perkins

a) int t[2][5];
b) 2 rows
c) 5 columns
d) t has 10 elements
e) t[1][0], t[1][1], t[1][2], t[1][3], t[1][4]
f) t[0][2], t[1][2]
g) t[1][2] = 0;
h) t[0][0] = 0;
t[0][1] = 0;
t[0][2] = 0;
t[0][3] = 0;
t[0][4] = 0;
t[1][0] = 0;
t[1][1] = 0;
t[1][2] = 0;
t[1][3] = 0;
t[1][4] = 0;
i) 	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			t[i][j] = 0;
		}
	}
j) 	int temp;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Enter the next value");
			scanf("%d", &temp);
			t[i][j] = temp;
		}
	}
k) int min = t[0][0];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (t[i][j])
			{
				min = t[i][j];
			}
		}
	}
l) for (int i = 0; i < 5; i++)
	{
		printf("%d", t[0][i]);
	}
m) 	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		printf("%d", t[i][4]);
	}
n)
int main() {

	printf("%5s%5d%5d%5d%5d%5d\n", "Arr:", 0, 1, 2, 3, 4);
	printf("%5d", 0);
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", t[0][i]);
	}
	printf("\n");
	printf("%5d", 1);
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", t[1][i]);
	}
	printf("\n");

	return 0;
}
