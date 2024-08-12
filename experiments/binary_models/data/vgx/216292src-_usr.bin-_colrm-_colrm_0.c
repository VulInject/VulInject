int
main(int argc, char *argv[])
{
char	 *VAR1, *VAR2;
ssize_t	  VAR3;
wchar_t	  VAR4;
u_long	  VAR5, VAR6, VAR7, VAR8;
int	  VAR9, VAR10, VAR11;

FUN1(VAR12, "");

if (FUN2("", NULL) == -1)
FUN3(1, "");

while ((VAR9 = getopt(argc, argv, "")) != -1)
switch(VAR9) {
default:
FUN4();
}
argc -= VAR13;
argv += VAR13;

VAR7 = VAR8 = 0;
switch(argc) {
case 2:
VAR8 = FUN5(argv[1], &VAR2, 10);
if (VAR8 <= 0 || *VAR2)
FUN6(1, "", argv[1]);

case 1:
VAR7 = FUN5(argv[0], &VAR2, 10);
if (VAR7 <= 0 || *VAR2)
FUN6(1, "", argv[0]);
break;
case 0:
break;
default:
FUN4();
}

if (VAR8 && VAR7 > VAR8)
FUN3(1, "");

VAR1 = NULL;
while (FUN7(&VAR1, &VAR3, stdin) != -1) {
VAR5 = 0;
VAR11 = 0;
for (VAR2 = VAR1; *VAR2 != ''; VAR2 += VAR10) {
VAR10 = 1;
switch (*VAR2) {
case '':
FUN8('');
continue;
case '':

if (VAR7 == 0 || VAR5 < VAR7 ||
(VAR8 > 0 &&
VAR5 > VAR8 + (VAR11 > 1))) {
FUN8('');
if (VAR11 > 1 && VAR2[1] == '')
FUN8('');
} 
if (VAR11 > 1 && VAR2[1] == '')
VAR2++;
VAR5 -= VAR11;
continue;
case '':
VAR6 = (VAR5 + VAR14) & ~(VAR14 - 1);
if (VAR7 == 0 || VAR6 < VAR7) {
FUN8('');
VAR5 = VAR6;
} else

while (VAR5 < VAR6)
if (++VAR5 < VAR7 ||
(VAR8 > 0 &&
VAR5 > VAR8))
FUN8('');
continue;
default:
break;
}



if ((VAR10 = FUN9(&VAR4, VAR2, VAR15)) == -1) {
(void)FUN9(NULL, NULL, VAR15);
VAR10 = 1;
VAR11 = 1;
} else if ((VAR11 = FUN10(VAR4)) == -1)
VAR11 = 1;



if ((VAR7 == 0 || VAR5 + VAR11 < VAR7 ||
(VAR8 > 0 && VAR5 + (VAR11 > 0) > VAR8)))
fwrite(VAR2, 1, VAR10, VAR16);



else if (VAR11 > 1 && VAR2[VAR10] != '' &&
(VAR7 == 0 || VAR5 + 1 < VAR7 ||
(VAR8 > 0 && VAR5 + VAR11 > VAR8)))
FUN8('');

VAR5 += VAR11;
}
}
if (FUN11(stdin))
FUN3(1, "");
if (FUN11(VAR16))
FUN3(1, "");
return 0;
}