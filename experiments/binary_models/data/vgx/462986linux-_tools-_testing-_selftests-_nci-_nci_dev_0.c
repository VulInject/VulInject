int FUN1(int VAR1, int VAR2, int VAR3, int VAR4)
{
struct {
struct nlmsghdr VAR5;
struct genlmsghdr VAR6;
char VAR7[512];
} VAR8;

struct VAR9 *VAR10;
__u32 VAR11;
int VAR12;
__u8 VAR13;
int VAR14;
int VAR15;

__u16 VAR16;
void *VAR17;
int VAR18;

VAR16 = VAR19;
VAR17 = &VAR1;
VAR18 = 4;

FUN2(VAR2, VAR3, VAR4, VAR20, 1, &VAR16,
&VAR17, &VAR18, VAR21 | VAR22);
VAR14 = recv(VAR2, &VAR8, sizeof(VAR8), 0);
if (VAR8.VAR5.VAR23 == VAR24 || VAR14 < 0 ||
!FUN3(&VAR8.VAR5, VAR14))
return -1;

VAR14 = FUN4(&VAR8.VAR5);
VAR10 = (struct VAR9 *)FUN5(&VAR8);

VAR15 = 0;
VAR12 = -1;
VAR11 = -1;
VAR13 = -1;

while (VAR15 < VAR14) {
VAR15 += FUN6(VAR10->VAR25);

if (VAR10->VAR26 == VAR27)
VAR12 = *(int *)((char *)VAR10 + VAR28);
else if (VAR10->VAR26 == VAR29)
VAR13 = *(VAR30 *)((char *)VAR10 + VAR28);
else if (VAR10->VAR26 == VAR31)
VAR11 = *(VAR32 *)((char *)VAR10 + VAR28);

VAR10 = (struct VAR9 *)(FUN5(&VAR8) + VAR15);
}

if (VAR12 == -1 || VAR13 != 0x20 || VAR11 != VAR33)
return -1;

return VAR12;
}