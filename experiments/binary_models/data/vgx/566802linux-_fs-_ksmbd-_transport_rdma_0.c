static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5, int VAR6,
bool VAR7, unsigned int VAR8)
{
struct VAR9 *VAR10 = FUN2(VAR2);
int VAR11;
int VAR12, VAR13, VAR14;
int VAR15 = VAR10->VAR16 -
sizeof(struct VAR17);
int VAR18;
struct kvec VAR19;
struct smb_direct_send_ctx VAR20;

if (VAR10->VAR21 != VAR22)
return -VAR23;


VAR6 -= 4;
VAR4[0].VAR24 += 4;
VAR4[0].VAR25 -= 4;

VAR11 = VAR6;
FUN3(VAR26, "", VAR6);

FUN4(VAR10, &VAR20, VAR7, VAR8);
VAR12 = VAR13 = 0;
VAR6 = 0;
while (true) {
VAR6 += VAR4[VAR13].VAR25;
if (VAR6 > VAR15) {
if (VAR13 > VAR12) {
VAR11 -=
(VAR6 - VAR4[VAR13].VAR25);
VAR18 = FUN5(VAR10, &VAR20,
&VAR4[VAR12], VAR13 - VAR12,
VAR11);
if (VAR18)
goto VAR27;
} else {

int VAR28  = (VAR6 + VAR15 - 1) /
VAR15;

for (VAR14 = 0; VAR14 < VAR28; VAR14++) {
VAR19.VAR24 =
(char *)VAR4[VAR12].VAR24 +
VAR14 * VAR15;
VAR19.VAR25 =
FUN6(int, VAR15,
VAR6 - VAR15 * VAR14);
VAR11 -= VAR19.VAR25;
VAR18 = FUN5(VAR10, &VAR20, &VAR19, 1,
VAR11);
if (VAR18)
goto VAR27;
}
VAR13++;
if (VAR13 == VAR5)
break;
}
VAR12 = VAR13;
VAR6 = 0;
} else {
VAR13++;
if (VAR13 == VAR5) {

VAR11 -= VAR6;
VAR18 = FUN5(VAR10, &VAR20,
&VAR4[VAR12], VAR13 - VAR12,
VAR11);
if (VAR18)
goto VAR27;
break;
}
}
}

VAR27:
VAR18 = FUN7(VAR10, &VAR20, true);



FUN8(VAR10->VAR29,
FUN9(&VAR10->VAR30) == 0);
return VAR18;
}