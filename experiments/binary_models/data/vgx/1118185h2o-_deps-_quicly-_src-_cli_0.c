static void FUN1(int VAR1, struct VAR2 *VAR3, struct VAR4 *VAR5, size_t VAR6)
{
struct iovec VAR7 = {.VAR8 = (void *)VAR5[0].VAR8,
.VAR9 = VAR5[VAR6 - 1].VAR8 + VAR5[VAR6 - 1].VAR9 - VAR5[0].VAR8};
struct msghdr VAR10 = {
.VAR11 = VAR3,
.VAR12 = FUN2(VAR3),
.VAR13 = &VAR7,
.VAR14 = 1,
};

union {
struct cmsghdr VAR15;
char VAR16[FUN3(sizeof(VAR17))];
} VAR18;
if (VAR6 != 1) {
VAR18.VAR15.VAR19 = VAR20;
VAR18.VAR15.VAR21 = VAR22;
VAR18.VAR15.VAR23 = FUN4(sizeof(VAR17));
*(VAR17 *)FUN5(&VAR18.VAR15) = VAR5[0].VAR9;
VAR10.VAR24 = &VAR18;
VAR10.VAR25 = (VAR26)FUN3(sizeof(VAR17));
}

int VAR27;
while ((VAR27 = sendmsg(VAR1, &VAR10, 0)) == -1 && VAR28 == VAR29)
;
if (VAR27 == -1)
FUN6("");
}