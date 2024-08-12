FUN1  (VAR1 **VAR2)
{
ret_t VAR3;
FUN2(1, VAR4, VAR5);


FUN3(&(VAR4->VAR6));


VAR4->VAR7              = true;
VAR4->VAR8     = VAR9;


VAR4->VAR10        = false;
VAR4->VAR11      = false;


VAR4->VAR12       = false;
VAR4->VAR13           = NULL;
VAR4->VAR14        = NULL;

VAR4->VAR15           = 5;
VAR4->VAR16     = 1000;

VAR4->VAR17        = FUN4 (NULL);

VAR4->VAR18         = true;
VAR4->VAR19     = VAR20;
VAR4->VAR21  = true;

VAR4->VAR22        = -1;
VAR4->VAR23     = -1;
VAR4->VAR24         =  0;
VAR4->VAR25   = -1;

VAR4->VAR26          = false;
VAR4->VAR27         = FUN5();
VAR4->VAR28              = VAR4->VAR27;
VAR4->VAR29        = FUN6();
VAR4->VAR30             = VAR4->VAR29;
VAR4->VAR31      = VAR32;

VAR4->VAR33    = FUN7 (VAR34, VAR35);
VAR4->VAR36 = -1;

VAR4->VAR37      = 65534;
VAR4->VAR38.VAR39      = VAR40;
VAR4->VAR38.VAR41      = VAR42;

VAR4->VAR43      = NULL;
VAR4->VAR44            = NULL;
VAR4->VAR45            = NULL;

VAR4->VAR46              = NULL;
VAR4->VAR47             = NULL;
VAR4->VAR44            = NULL;
VAR4->VAR48         = NULL;

VAR4->VAR49           = NULL;
VAR4->VAR50   = true;

FUN8 (&VAR4->VAR51);
FUN8 (&VAR4->VAR52);

FUN8 (&VAR4->VAR53);
FUN9 (&VAR4->VAR53, VAR54);


FUN3 (&VAR4->VAR55);
FUN3 (&VAR4->VAR56);
FUN10 (&VAR4->VAR57, VAR58);


FUN11 (&VAR4->VAR59);


FUN12 (&VAR4->VAR60);


FUN12 (&VAR4->VAR61);
FUN3 (&VAR4->VAR62);

VAR4->VAR63       = 0;
VAR4->VAR64      = VAR65;


VAR4->VAR66  = 0;
VAR4->VAR67 = VAR68;

VAR4->VAR69         = 0;
VAR4->VAR70        = VAR71;


FUN8 (&VAR4->VAR72);

FUN8    (&VAR4->VAR73);
FUN9 (&VAR4->VAR73, VAR74);


FUN13 (&VAR4->VAR75);


FUN12 (&VAR4->VAR76);


FUN14 (&VAR4->VAR44);
if (FUN15 (VAR4->VAR44 == NULL)) {
goto VAR77;
}


VAR3 = FUN16 (&VAR4->VAR45);
if (FUN15(VAR3 < VAR78)) {
goto VAR77;
}


VAR3 = FUN17 (&VAR4->VAR43);
if (VAR3 != VAR78) {
goto VAR77;
}

VAR3 = FUN18 (VAR4->VAR43);
if (VAR3 != VAR78) {
goto VAR77;
}

FUN19 (VAR4->VAR43);


*VAR2 = VAR4;
return VAR78;

VAR77:
FUN20 (VAR4);
return VAR79;
}