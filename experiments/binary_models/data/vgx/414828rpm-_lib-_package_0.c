VAR1 FUN1(Header VAR2, Header VAR3, char **VAR4)
{
const struct VAR5 *VAR6;
struct rpmtd_s VAR7;

for (VAR6 = VAR8; VAR6->VAR9; VAR6++) {

if (FUN2(VAR2, VAR6->VAR10)) {

if (VAR6->VAR11 && !FUN2(VAR3, VAR6->VAR9))
continue;
goto VAR12;
}
}

FUN3(&VAR7);
for (VAR6 = VAR8; VAR6->VAR9; VAR6++) {
if (FUN4(VAR3, VAR6->VAR9, &VAR7, VAR13|VAR14)) {

if (VAR6->VAR9 != VAR6->VAR10)
VAR7.VAR15 = VAR6->VAR10;

if (VAR7.VAR16 != FUN5(VAR7.VAR15))
break;
if (VAR7.VAR17 < 1 || VAR7.VAR17 > 16*1024*1024)
break;
if (VAR6->VAR17 && VAR7.VAR17 != VAR6->VAR17)
break;
if (!FUN6(VAR2, &VAR7, VAR18))
break;
FUN7(&VAR7);
}
}
FUN7(&VAR7);

VAR12:
if (VAR6->VAR9) {
FUN8(VAR4, "",
FUN9(VAR6->VAR10), VAR6->VAR10);
}

return VAR6->VAR9;
}