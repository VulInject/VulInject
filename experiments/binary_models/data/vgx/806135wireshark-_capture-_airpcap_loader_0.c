void
FUN1(VAR1* VAR2)
{
guint VAR3;
if (VAR2 == NULL)
{
FUN2("");
return;
}

FUN2("");
FUN2("",VAR2->VAR4);
FUN2("",VAR2->VAR5);
FUN2("",VAR2->VAR6 ? "" : "");
FUN2("",VAR2->VAR7.VAR8);
FUN2("",VAR2->VAR7.VAR9);
FUN2("",VAR2->VAR10 ? "" : "");
FUN2("",VAR2->VAR11 ? "" : "");
FUN2("",VAR2->VAR12!=NULL ? "" : "");
FUN2("",VAR2->VAR13 ? "" : "");
FUN2("",VAR2->VAR14!=NULL ? "" : "");
FUN2("",VAR2->VAR15);
FUN2("",VAR2->VAR16 ? "" : "");
FUN2("",VAR2->VAR17);
FUN2("",VAR2->VAR18 ? "" : "");
FUN2("",VAR2->VAR19);
FUN2("",VAR2->VAR20);
FUN2("",VAR2->VAR21);

for(VAR3=0; VAR3<(VAR2->VAR21); VAR3++){
FUN2("",VAR3+1);
FUN2("",VAR2->VAR20[VAR3].VAR22);
FUN2("",VAR2->VAR20[VAR3].VAR8);
FUN2("",VAR2->VAR20[VAR3].VAR23);
}
FUN2("");
}