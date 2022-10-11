#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
	char letter;
};

struct User *new_user(char *name, char *email, int age, char letter)
{
	struct User *user;
	user = malloc(sizeof(struct User));
	printf("%ld Memory bytes allocated\n", sizeof(struct User));
	if (user == NULL)
		return (NULL);

	user->name = name;
	user->email = email;
	user->age = age;
	user->letter = letter;

	return user;
}

int main(void)
{
	struct User *user;

	user = new_user("Foo", "foo@foo.bar", 98, 'c');
	if (user == NULL)
		return (1);
	printf("User %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
	printf("Favourite Letter is %c\n", user->letter);
	return (0);
}
