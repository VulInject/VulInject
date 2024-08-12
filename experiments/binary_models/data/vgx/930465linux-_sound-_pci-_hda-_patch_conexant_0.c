static void FUN1(struct VAR1 *VAR2)
{

int VAR3;
bool VAR4 = false;
struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR7 *VAR8 = &VAR6->VAR9.VAR10;

hda_nid_t VAR11 = VAR6->VAR9.VAR12[VAR6->VAR9.VAR13[0]];

for (VAR3 = 0; VAR3 < VAR8->VAR14; VAR3++)
if (VAR8->VAR15[VAR3].VAR16 == VAR11) {
VAR4 = !!VAR8->VAR15[VAR3].VAR17;
break;
}

if (VAR4) {
FUN2(VAR2, 0x1c, 0, 0x410, 0x7c); 
VAR6->VAR9.VAR18 = false;
} else {
FUN2(VAR2, 0x1c, 0, 0x410, 0x54); 
VAR6->VAR9.VAR18 = FUN3(VAR2, VAR6->VAR9.VAR10.VAR19[0]);
}

FUN4(VAR2);
}