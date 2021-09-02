4.1
	a)definite
	b)indefinite
	c)counter or control variable
	d)continue
	e)break
	f)switch selection statement

4.2
	a)false: the default command is optional and not always needed
	b)false: the break command is optional and not always needed
	c)false: both must be true
	d)true

4.3
	a)
	unsigned int sum = 0;
	for (unsigned int count = 1; count<=99; count += 2) {
		sum += count;
	}
	b)
	printf("%-15.1f\n", 333.546372);
	printf("%-15.2f\n", 333.546372);
	printf("%-15.3f\n", 333.546372);
	printf("%-15.4f\n", 333.546372);
	printf("%-15.5f\n", 333.546372);
	c)
	printf("%10.2f\n", pow(2.5, 3));
	d)
	unsigned int x = 1;
	while (x <= 20) {
		printf("%d", x);
		if (x % 5 == 0) {
			puts("");
		}
		else {
			printf("%s", "\t");
		}
		++x;
	}
	e)
	for (unsigned int x = 1; x <= 20; ++x) {
		printf("%u", x);
		if (x % 5 == 0) {
			puts("");
		}
		else {
			printf("%s", "\t");
		}
	}

4.4
	a)
	There is a semicolon after the while loop. Replace with a curly brace.
	b)
	There is a double in the for loop. Replace with an int.
	c)
	Missing a break in the statement. Add a break in the first statement.
	d)
	Missing an equals in the tester. Repace with a <=.