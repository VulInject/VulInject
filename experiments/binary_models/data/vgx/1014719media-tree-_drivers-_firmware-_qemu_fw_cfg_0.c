static int FUN1(const char *VAR1, const struct VAR2 *VAR3)
{
struct resource VAR4[3] = {};
char *VAR5;
phys_addr_t VAR6;
resource_size_t VAR7, VAR8, VAR9;
int VAR10, VAR11 = 0;


if (VAR12) {

FUN2(VAR12);
return -VAR13;
}


VAR7 = FUN3(VAR1, &VAR5);


VAR10 = sscanf(VAR5, VAR14,
&VAR6, &VAR11,
&VAR8, &VAR9, &VAR11);


if (VAR5[VAR11] ||
(VAR10 != 1 && VAR10 != 3))
return -VAR13;

VAR4[0].VAR15 = VAR6;
VAR4[0].VAR16 = VAR6 + VAR7 - 1;
VAR4[0].VAR17 = !strcmp(VAR3->VAR18, "") ? VAR19 :
VAR20;


if (VAR10 > 1) {
VAR4[1].VAR18 = "";
VAR4[1].VAR15 = VAR8;
VAR4[1].VAR17 = VAR21;
VAR4[2].VAR18 = "";
VAR4[2].VAR15 = VAR9;
VAR4[2].VAR17 = VAR21;
}


VAR12 = FUN4("",
VAR22, VAR4, VAR10);
if (FUN5(VAR12))
return FUN6(VAR12);

return 0;
}