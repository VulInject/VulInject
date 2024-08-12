*
*            tanh VAR1  + i tan y      sinh 2x  +  i sin 2y
* ctanh VAR2 = --------------------- = --------------------
*           1 + VAR3 FUN1(VAR1)FUN2(VAR4)       cosh 2x + cos 2y
*
* VAR5 |VAR1| >= VAR6/2 (14,28,34,60 for VAR7, double, double VAR8, VAR9),
* we VAR10
*
*                         1   2x                              2 sin 2y
*    cosh 2x = sinh 2x = --- e    and hence  ctanh VAR2 = 1 + VAR3 -----------;
*                         2                                       2x
*                                                                VAR11
*
* VAR12, to avoid VAR13, for |VAR1| < VAR6/2,
*                              2x     2
*                            (VAR11   - 1)        2       2
*    cosh 2x + cos 2y = 1 + ------------ + cos VAR4 - sin VAR4
*                                 2x
*                              2 VAR11
*
*                        1    2x     2  -2x         2
*                     = --- (VAR11   - 1)  VAR11     + 2 cos VAR4
*                        2
* and
*
*                  [            2x      ]
*               1  [  2x       VAR11   - 1  ]
*    sinh 2x = --- [ VAR11  - 1 + --------- ]
*               2  [               2x   ]
*                  [              VAR11     ]
*                                             2x
* Implementation VAR14:  let VAR15 = FUN3(2x) = VAR11   - 1, VAR16
*
*                     1    [  VAR15*t         2  ]              1    [      VAR15  ]
* cosh 2x + cos 2y = --- * [ ----- + 4 cos VAR4 ];  sinh 2x = --- * [ VAR15 + --- ]
*                     2    [  VAR15+1            ]              2    [     VAR15+1 ]
*
* VAR17,
*
*
*                        VAR15*VAR15+2t                  [4(VAR15+1)(cos VAR4)]*(sin VAR4)
*    ctanh VAR2 = --------------------------- + VAR3 --------------------------
*               VAR15*VAR15+[4(VAR15+1)(cos VAR4)](cos VAR4)     VAR15*VAR15+[4(VAR15+1)(cos VAR4)](cos VAR4)
*
* FUN4 (conform to VAR18/IEC 9899:1999(VAR19)):
*      FUN5(0,0)=(0,0)
*      FUN5(VAR1,VAR20) = (VAR21,VAR21) for finite VAR1
*      FUN5(VAR1,VAR21) = (VAR21,VAR21) for finite VAR1
*      FUN5(VAR20,VAR4) = 1+ VAR3*0*FUN6(2y) for VAR22-signed finite VAR4
*      FUN5(VAR20,VAR20) = (1, +-0)
*      FUN5(VAR20,VAR21) = (1, +-0)
*      FUN5(VAR21,0) = (VAR21,0)
*      FUN5(VAR21,VAR4) = (VAR21,VAR21) for VAR23-zero VAR4
*      FUN5(VAR21,VAR21) = (VAR21,VAR21)



static const double VAR24 = 4.0, VAR25 = 2.0, VAR26 = 1.0, VAR27 = 0.0;

VAR28
FUN5(dcomplex VAR2) {
double VAR15, VAR29, VAR30, VAR31, VAR1, VAR4, VAR32, VAR33;
int VAR34, VAR35, VAR36, VAR37, VAR38, VAR39;
dcomplex VAR40;

VAR1 = FUN7(VAR2);
VAR4 = FUN8(VAR2);
VAR34 = FUN9(VAR1);
VAR36 = FUN10(VAR1);
VAR35 = VAR34 & 0x7fffffff;
VAR37 = FUN9(VAR4);
VAR39 = FUN10(VAR4);
VAR38 = VAR37 & 0x7fffffff;
VAR1 = FUN11(VAR1);
VAR4 = FUN11(VAR4);

if ((VAR38 | VAR39) == 0) {	
FUN7(VAR40) = FUN1(VAR1);
FUN8(VAR40) = VAR27;
} else if (VAR38 >= 0x7ff00000) {	
if (VAR35 < 0x7ff00000)	
FUN7(VAR40) = FUN8(VAR40) = VAR4 - VAR4;
else if (((VAR35 - 0x7ff00000) | VAR36) == 0) {	
FUN7(VAR40) = VAR26;
FUN8(VAR40) = VAR27;
} else {
FUN7(VAR40) = VAR1 + VAR4;
FUN8(VAR40) = VAR4 - VAR4;
}
} else if (VAR35 >= 0x403c0000) {

FUN7(VAR40) = VAR26;
if (VAR38 < 0x7fe00000)	
VAR32 = FUN6(VAR4 + VAR4);
else {
(void) FUN12(VAR4, &VAR32, &VAR33);
VAR32 = (VAR32 + VAR32) * VAR33;
}
if (VAR35 >= 0x7fe00000) {	
if (VAR35 >= 0x7ff00000) {	
if (((VAR35 - 0x7ff00000) | VAR36) != 0)
FUN7(VAR40) = FUN8(VAR40) = VAR1 + VAR4;

else
FUN8(VAR40) = VAR27 * VAR32;	
} else
FUN8(VAR40) = VAR32 * FUN13(-VAR1);	
} else
FUN8(VAR40) = (VAR32 + VAR32) * FUN13(-(VAR1 + VAR1));

} else {



(void) FUN12(VAR4, &VAR32, &VAR33);
VAR15 = FUN3(VAR1 + VAR1);
VAR29 = (VAR24 * VAR33) * (VAR15 + VAR26);
VAR31 = VAR15 * VAR15;
VAR30 = VAR26 / (VAR31 + VAR29 * VAR33);
FUN7(VAR40) = (VAR31 + VAR25 * VAR15) * VAR30;
FUN8(VAR40) = (VAR29 * VAR32) * VAR30;
}
if (VAR34 < 0)
FUN7(VAR40) = -FUN7(VAR40);
if (VAR37 < 0)
FUN8(VAR40) = -FUN8(VAR40);
return (VAR40);
}