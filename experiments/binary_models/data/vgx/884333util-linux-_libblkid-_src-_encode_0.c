int FUN1(const char *VAR1, char *VAR2, size_t VAR3)
{
size_t VAR4 = 0;

if (!VAR1 || !VAR2 || !VAR3)
return -1;

FUN2(
(const unsigned char *) VAR1, FUN3(VAR1, VAR3),
(unsigned char *) VAR2, VAR3);

while (VAR4 < VAR3 && VAR2[VAR4] != '') {
int VAR5;


if (VAR2[VAR4] > 0x20 && VAR2[VAR4] <= 0x7E)
VAR4++;


else if (VAR2[VAR4] == '' && VAR2[VAR4+1] == '')
VAR4 += 2;


else if (FUN4(VAR2[VAR4]))
VAR2[VAR4++] = '';


else if ((VAR5 = FUN5(&VAR2[VAR4])) >= 1)
VAR4 += VAR5;


else
VAR2[VAR4++] = '';
}

VAR2[VAR3 - 1] = '';
return 0;
}