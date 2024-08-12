FUN1 (VAR1 * VAR2, VAR1 * VAR3,
unsigned int VAR4, unsigned int *VAR5)



{
register unsigned int VAR6, VAR7, VAR8, VAR9;
register int VAR10;


FUN2(VAR2,VAR6,VAR7);
FUN2(VAR3,VAR8,VAR9);

if(    (FUN3(VAR6) == VAR11)
|| (FUN3(VAR8) == VAR11) )
{

if( ((FUN3(VAR6) == VAR11)
&& FUN4(VAR6,VAR7) 
&& (FUN5(VAR4) || FUN6(VAR6)))
||
((FUN3(VAR8) == VAR11)
&& FUN4(VAR8,VAR9) 
&& (FUN5(VAR4) || FUN6(VAR8))) )
{
if( FUN7() ) {
FUN8(FUN9(VAR4));
return(VAR12);
}
else FUN10();
FUN8(FUN9(VAR4));
return(VAR13);
}

else if( ((FUN3(VAR6) == VAR11)
&& FUN4(VAR6,VAR7))
||
((FUN3(VAR8) == VAR11)
&& FUN4(VAR8,VAR9)) )
{

FUN8(FUN9(VAR4));
return(VAR13);
}

}

FUN11(VAR6,VAR8,VAR10);
if( VAR10 < 0 )
{

if( FUN12(VAR6,VAR7) 
&& FUN12(VAR8,VAR9) )
{
FUN8(FUN13(VAR4));
}
else if( FUN14(VAR6) )
{
FUN8(FUN15(VAR4));
}
else
{
FUN8(FUN16(VAR4));
}
}

else if(FUN17(VAR6,VAR7,VAR8,VAR9))
{
FUN8(FUN13(VAR4));
}
else if( FUN18(VAR6) )
{

if( FUN19(VAR6) < FUN19(VAR8) )
{
FUN8(FUN15(VAR4));
}
else if( FUN19(VAR6) > FUN19(VAR8) )
{
FUN8(FUN16(VAR4));
}
else
{

if( FUN20(VAR7) < FUN20(VAR9) )
{
FUN8(FUN15(VAR4));
}
else 
{
FUN8(FUN16(VAR4));
}
}
}
else
{

if( FUN19(VAR6) > FUN19(VAR8) )