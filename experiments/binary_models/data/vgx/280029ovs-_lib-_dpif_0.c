int
FUN1(struct VAR1 *VAR1, ofproto_meter_id VAR2,
struct VAR3 *VAR4)
{
FUN2(VAR5);

if (!(VAR4->VAR6 & (VAR7 | VAR8))) {
return VAR9; 
}

if ((VAR4->VAR6 & VAR7) && (VAR4->VAR6 & VAR8)) {
return VAR9; 
}

if (VAR4->VAR10 == 0) {
return VAR11;
}

for (size_t VAR12 = 0; VAR12 < VAR4->VAR10; VAR12++) {
if (VAR4->VAR13[VAR12].VAR14 == 0) {
return VAR15; 
}
}

int VAR16 = VAR1->VAR17->FUN3(VAR1, VAR2, VAR4);
if (!VAR16) {
FUN4(&VAR18, ""VAR19"",
FUN5(VAR1), VAR2.VAR20);
} else {
FUN6(&VAR21, ""VAR19"",
FUN5(VAR1), VAR2.VAR20, FUN7(VAR16));
}
return VAR16;
}