int main(int argc, char **argv)
{
const char *VAR1 = NULL;
unsigned int VAR2[VAR3];
unsigned int VAR4 = 0;
int VAR5;
int VAR6;
int VAR7;

VAR7 = 0;
while ((VAR6 = getopt(argc, argv, "")) != -1) {
switch (VAR6) {
case '':
VAR4 = FUN1(VAR8, NULL, 10);
break;
case '':
VAR1 = VAR8;
break;
case '':

if (VAR7 < VAR3)
VAR2[VAR7] = FUN1(VAR8, NULL, 10);

VAR7++;
break;
case '':
FUN2();
return -1;
}
}

if (VAR7 >= VAR3) {
fprintf(VAR9,
"",
VAR3, VAR7 + 1);
return -1;
}

VAR5 = VAR7;

if (!VAR1 || !VAR5) {
FUN2();
return -1;
}
return FUN3(VAR1, VAR2, VAR5, VAR4);
}