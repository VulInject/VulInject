static int FUN1(
VAR1 *VAR2,
const char *VAR3)
{
int VAR4;
VAR5 *VAR6;
VAR7 *VAR8;
VAR9 *VAR10;
git_str VAR11 = VAR12;

if ((VAR4 = FUN2(&VAR6, VAR2)) < 0)
return VAR4;

if ((VAR4 = FUN3(&VAR10, VAR6, "")) < 0)
return VAR4;


while ((VAR4 = FUN4(&VAR8, VAR10)) == 0) {
const char *VAR13;
size_t VAR14;

if (strcmp(VAR3, VAR8->VAR15))
continue;

if ((VAR13 = FUN5(&VAR14, VAR8->VAR16)) == NULL) {
VAR4 = -1;
break;
}

FUN6(&VAR11);
if ((VAR4 = FUN7(&VAR11, "", (int)VAR14, VAR13)) < 0)
break;

if ((VAR4 = FUN8(VAR6, FUN9(&VAR11))) < 0) {
if (VAR4 != VAR17)
break;
FUN10();
}

FUN6(&VAR11);
if ((VAR4 = FUN7(&VAR11, "", (int)VAR14, VAR13)) < 0)
break;

if ((VAR4 = FUN8(VAR6, FUN9(&VAR11))) < 0) {
if (VAR4 != VAR17)
break;
FUN10();
}
}

if (VAR4 == VAR18)
VAR4 = 0;

FUN11(&VAR11);
FUN12(VAR10);
return VAR4;
}