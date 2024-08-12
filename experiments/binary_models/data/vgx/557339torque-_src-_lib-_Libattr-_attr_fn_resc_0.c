int FUN1(

VAR1 *VAR2,  
const char    *VAR3,  
const char    *VAR4, 
const char    *VAR5,   
int            VAR6)  

{
VAR7 *VAR8;
VAR9 *VAR10;
int   VAR11 = 0;
int   VAR12;

if (VAR2 == NULL)
{
return(VAR13);
}

if (VAR4 == NULL)
{
return(VAR14);
}

if (!(VAR2->VAR15 & VAR16))
{
if (VAR2->VAR17.VAR18 != NULL)
{
VAR19::VAR20<VAR7> *VAR21 = (VAR19::VAR20<VAR7> *)VAR2->VAR17.VAR18;
VAR21->FUN2();
}
}

VAR10 = FUN3(VAR22, VAR4, VAR23);

if (VAR10 == NULL)
{


VAR11 = VAR14;

VAR10 = VAR22 + (VAR23 - 1);
}

VAR8 = FUN4(VAR2, VAR10);

if (VAR8 == NULL) 
{
if ((VAR8 = FUN5(VAR2, VAR10)) == NULL)
{
return(VAR24);
}
}



if (((VAR8->VAR25->VAR26 & VAR6 & VAR27) == 0) &&
(VAR6 != VAR28))
{
return(VAR29);
}

VAR2->VAR15 |= VAR16 | VAR30;

VAR12 = VAR10->FUN6(&VAR8->VAR31, VAR3, VAR4, VAR5, VAR6);

if (VAR12 == 0)
{


return(VAR11);
}



return(VAR12);
}







int FUN7(

VAR1  *VAR32,    
VAR33     *VAR34,   
const char    *VAR35,  
const char    *VAR36,  
int             VAR37,    
int             VAR38) 

{
int     VAR39;
int     VAR11;
int     VAR40 = 0;
int     VAR6;

if (VAR32 == NULL)
{
return(-1);
}

if ((!(VAR32->VAR15 & VAR16)) ||
(VAR32->VAR17.VAR18 == NULL))
{
return(0); 
}



VAR19::VAR20<VAR7> &VAR21 = *((VAR19::VAR20<VAR7> *)VAR32->VAR17.VAR18);

for (size_t VAR41 = 0; VAR41 < VAR21.FUN8(); VAR41++)
{


VAR6 = VAR21[VAR41].VAR25->VAR26 & VAR38 ;
VAR39 = VAR21[VAR41].VAR31.VAR15 & VAR42;

if (((VAR37 == VAR43) && VAR6)  ||
((VAR37 == VAR44) && VAR6)     ||
((VAR37 == VAR45) && (VAR39 == 0))  ||
((VAR37 == VAR46)  && (VAR39 == 0) && VAR6))
{

VAR36 = VAR21[VAR41].VAR25->VAR47;
VAR11 = VAR21[VAR41].VAR25->FUN9(&VAR21[VAR41].VAR31, VAR34, VAR35, VAR36, VAR37,
VAR38);

if (VAR11 < 0)
return (VAR11);

VAR40 += VAR11;
}
}

return(VAR40);
} 





int FUN10(

VAR1 *VAR48,
VAR1 *VAR49,
enum batch_op  VAR50)

{
enum batch_op VAR51;
VAR7 *VAR52;
int   VAR11;

if (VAR48 == NULL || VAR49 == NULL)
return(VAR53);

if (VAR49->VAR17.VAR18 == NULL)
return(VAR54);

VAR19::VAR20<VAR7> *VAR55 = (VAR19::VAR20<VAR7> *)VAR49->VAR17.VAR18;

for (size_t VAR41 = 0; VAR41 < VAR55->FUN8(); VAR41++)
{
VAR7 &VAR56 = VAR55->FUN11(VAR41);

VAR51 = VAR50;



VAR52 = FUN4(VAR48, VAR56.VAR25);

if (VAR52 == NULL)
{


VAR52 = FUN5(VAR48, VAR56.VAR25);

if (VAR52 == NULL)
{
return(VAR24);
}
}



if (VAR56.VAR31.VAR15 & VAR16)
{

if ((VAR11 = VAR52->VAR25->FUN12(&VAR52->VAR31, &VAR56.VAR31, VAR51)) != 0)
return (VAR11);
}
else
{
VAR52->VAR25->FUN13(&VAR52->VAR31);
}
}

VAR48->VAR15 |= VAR16 | VAR30;

return(0);
} 





int FUN14(

VAR1 *VAR32,
VAR1 *VAR57,
int           &VAR58,
int           &VAR59,
bool           VAR60,
bool           VAR61,
char          *VAR62)

{
VAR19::VAR20<VAR7> *VAR63 = (VAR19::VAR20<VAR7> *)VAR57->VAR17.VAR18;

for (size_t VAR41 = 0; VAR41 < VAR63->FUN8(); VAR41++)
{
VAR7 &VAR56 = VAR63->FUN11(VAR41);

if ((VAR56.VAR31.VAR15 & VAR16) &&
((VAR60 == true) ||
((VAR56.VAR31.VAR15 & VAR42) == 0)))
{
VAR7 *VAR64 = FUN4(VAR32, VAR56.VAR25);

if (VAR64 != NULL)
{
if (VAR64->VAR31.VAR15 & VAR16)
{
int VAR11;

if (VAR61)
VAR11 = VAR64->VAR25->FUN15(&VAR64->VAR31, &VAR56.VAR31);
else
VAR11 = VAR64->VAR25->FUN15(&VAR56.VAR31, &VAR64->VAR31);

if (VAR11 > 0)
{
if ((VAR62 != NULL) &&
(VAR62[0] == ''))
sprintf(VAR62, "", VAR56.VAR25->VAR47);

VAR58++;
}
else if (VAR11 < 0)
{
VAR59++;
}
}
}
}
}  

return(0);
} 







int FUN16(

VAR1 *VAR32,  
VAR1 *VAR57)  

{
VAR65 = 0;
VAR66 = 0;
VAR67 = 0;
VAR68 = 0;

if ((VAR32 == NULL) || (VAR57 == NULL))
{

return(-1);
}

if ((VAR32->VAR17.VAR18 == NULL) ||
(VAR57->VAR17.VAR18 == NULL))
{
return(0);
}




FUN14(VAR32, VAR57, VAR65, VAR67, false, true, NULL);

return(0);
}  







int FUN17(

VAR1      *VAR69,     
VAR1      *VAR70,       
int                 VAR71, 
char               *VAR62,           
enum compare_types  VAR72)           

{
int       VAR73 = 0;
int       VAR74 = 0;
int       VAR75 = 0;

VAR65 = 0;
VAR66 = 0;
VAR67 = 0;
VAR68 = 0;

if (VAR62 != NULL)
VAR62[0] = '';

if ((VAR69 == NULL) || (VAR70 == NULL))
{


return(-1);
}

if ((VAR69->VAR17.VAR18 == NULL) ||
(VAR70->VAR17.VAR18 == NULL))
{
return(VAR73);
}

if (VAR71 == 1)
{

FUN14(VAR69, VAR70, VAR74, VAR75, true, true, VAR62);
}
else
{



FUN14(VAR70, VAR69, VAR74, VAR75, false, false, VAR62);
}

if (VAR72 == VAR76)
VAR73 = VAR74;
else if (VAR72 == VAR77)
VAR73 = VAR75;

VAR65 = VAR74;
VAR67 = VAR75;

return(VAR73);
}  





void FUN18(

VAR1 *VAR78)

{
VAR19::VAR20<VAR7> *VAR21 = (VAR19::VAR20<VAR7> *)VAR78->VAR17.VAR18;

if (VAR21 != NULL)
{
for (size_t VAR41 = 0; VAR41 < VAR21->FUN8(); VAR41++)
{
VAR7 &VAR56 = VAR21->FUN11(VAR41);
VAR56.VAR25->FUN13(&VAR56.VAR31);
}

delete VAR21;
}

VAR78->VAR17.VAR18 = NULL;
VAR78->VAR15 &= ~VAR16;

return;
}  







VAR9 *FUN3(

VAR9 *VAR79, 
const char  *VAR3, 
int           VAR80) 

{
while (VAR80--)
{
if (!strcmp(VAR79->VAR47, VAR3))
{


return(VAR79);
}

VAR79++;
}

return(NULL);
}  







VAR7 *FUN4(

VAR1 *VAR78,  
VAR9  *VAR79)  

{
VAR7 *VAR81 = NULL;

if ((VAR78 == NULL) ||
(VAR78->VAR17.VAR18 == NULL))
return(NULL);

VAR19::VAR20<VAR7> *VAR21 = (VAR19::VAR20<VAR7> *)VAR78->VAR17.VAR18;

for (size_t VAR41 = 0; VAR41 < VAR21->FUN8(); VAR41++)
{
VAR7 &VAR56 = VAR21->FUN11(VAR41);
if (!strcmp(VAR56.VAR25->VAR47, VAR79->VAR47))
{
VAR81 = &VAR56;
break;
}
}

return(VAR81);
}  






VAR7 *FUN5(

VAR1    *VAR78,
VAR9     *VAR10)

{
resource  VAR82;

if (VAR78->VAR17.VAR18 == NULL)
VAR78->VAR17.VAR18 = new VAR19::VAR20<VAR7>();

VAR19::VAR20<VAR7> *VAR21 = (VAR19::VAR20<VAR7> *)VAR78->VAR17.VAR18;

for (size_t VAR41 = 0; VAR41 < VAR21->FUN8(); VAR41++)
{
VAR7 &VAR56 = VAR21->FUN11(VAR41);

if (!strcmp(VAR56.VAR25->VAR47, VAR10->VAR47))
{
return(&VAR56);
}
}

VAR82.VAR25 = VAR10;
VAR82.VAR31.VAR83 = VAR10->VAR84;
VAR82.VAR31.VAR15 = 0;
VAR10->FUN13(&VAR82.VAR31);

VAR21->FUN19(VAR82);
VAR78->VAR15 |= VAR16 | VAR30;


VAR7 &VAR56 = VAR21->FUN11(VAR21->FUN8() - 1);

return(&VAR56);
} 





int FUN20(

VAR1 *VAR78,
void          * FUN21(VAR85),
int            VAR86)

{
if (VAR78->VAR17.VAR18 != NULL)
{
VAR19::VAR20<VAR7> *VAR21 = (VAR19::VAR20<VAR7> *)VAR78->VAR17.VAR18;

for (size_t VAR41 = 0; VAR41 < VAR21->FUN8(); VAR41++)
{
VAR7 &VAR56 = VAR21->FUN11(VAR41);

if ((VAR56.VAR31.VAR15 & VAR30) &&
(VAR56.VAR25->VAR87))
VAR56.VAR25->FUN22(&VAR56, VAR78, VAR86);

VAR21->FUN11(VAR41).VAR31.VAR15 &= ~VAR30;
}
}

return(VAR54);
}