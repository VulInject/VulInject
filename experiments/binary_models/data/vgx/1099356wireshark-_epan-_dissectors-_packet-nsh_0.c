static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{

guint32 VAR7 = 0;
int VAR8;

while (VAR5 < VAR6) {

FUN2(VAR4, VAR9, VAR2, VAR5, 2, VAR10);
FUN2(VAR4, VAR11, VAR2, VAR5 + 2, 1, VAR10);


FUN2(VAR4, VAR12, VAR2, VAR5 + 3, 1, VAR10);


FUN3(VAR4, VAR13, VAR2, VAR5 + 3, 1, VAR10, &VAR7);

if (VAR7 > 0)
FUN2(VAR4, VAR14, VAR2, VAR5 + 4, VAR7, VAR15);

VAR8 = (VAR7 % 4) ? (4 - (VAR7 % 4)) : 0;
VAR5 = VAR5 + 4 + VAR7 + VAR8;

}


}