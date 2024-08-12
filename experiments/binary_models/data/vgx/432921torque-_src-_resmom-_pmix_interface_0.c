VAR1 FUN1(

const pmix_proc_t    VAR2[],
size_t               VAR3,
const pmix_info_t    VAR4[],
size_t               VAR5,
char                *VAR6,
size_t               VAR7,
pmix_modex_cbfunc_t  VAR8,
void                *VAR9)

{
pmix_status_t VAR10 = VAR11;

VAR12 *VAR13 = FUN2(VAR2[0].VAR14);

if (VAR13 != NULL)
{
if (FUN3(*VAR13) == false)
{
FUN4(NULL, VAR2[0].VAR14, VAR2, VAR3, VAR6, VAR15, VAR8, VAR9);
FUN5(VAR13, VAR6);
}
else if (FUN4(VAR13, VAR2[0].VAR14, VAR2, VAR3, VAR6, VAR15, VAR8, VAR9) == true)
{
FUN6(VAR13);
}
}
else
VAR10 = VAR16;

return(VAR10);
} 



VAR1 FUN7(

const VAR17   *VAR18,
const pmix_info_t    VAR4[],
size_t               VAR5,
pmix_modex_cbfunc_t  VAR8,
void                *VAR9)

{
return(VAR19);
} 



VAR1 FUN8(

const VAR17 *VAR18,
const pmix_info_t  VAR4[],
size_t             VAR5,
pmix_op_cbfunc_t   VAR8,
void              *VAR9)

{
return(VAR19);
}



VAR1 FUN9(

const VAR17     *VAR18,
char                 **VAR20,
const pmix_info_t      VAR4[],
size_t                 VAR5,
pmix_lookup_cbfunc_t   VAR8,
void                  *VAR9)

{
return(VAR19);
}



VAR1 FUN10(

const VAR17     *VAR18,
char                 **VAR20,
const pmix_info_t      VAR4[],
size_t                 VAR5,
pmix_op_cbfunc_t       VAR8,
void                  *VAR9)

{
return(VAR19);
}



bool FUN11(

VAR12        *VAR13,
const char *VAR21)

{
bool VAR22 = false;
for (int VAR23 = 0; VAR23 < VAR13->VAR24; VAR23++)
{
if (!strcmp(VAR21, VAR13->VAR25[VAR23].VAR26))
{
VAR22 = true;
break;
}
}

return(VAR22);
}



VAR1 FUN12(

const pmix_app_t  VAR27[],
size_t            VAR28,
VAR12              *VAR13)

{
pmix_status_t  VAR10 = VAR11;

for (size_t VAR23 = 0; VAR23 < VAR28; VAR23++)
{
for (size_t VAR29 = 0; VAR29 < VAR27[VAR23].VAR5; VAR29++)
{
if (!strcmp(VAR27[VAR23].VAR4[VAR29].VAR30, VAR31))
{
if (FUN11(VAR13, VAR27[VAR23].VAR4[VAR29].VAR32.VAR6.VAR33) == false)
{

VAR10 = VAR19;
break;
}
}
}
}

return(VAR10);
} 





int FUN13(

VAR12              *VAR13,
const VAR34 &VAR35)

{
int   VAR10 = VAR36;
VAR37 *VAR38 = FUN14(VAR13, VAR39);

if (VAR38 != NULL)
{
if ((VAR10 = FUN15(VAR38, VAR35.argv, VAR35.VAR40)) == VAR36)
{
(*VAR13->VAR41)[VAR15].FUN16(VAR35.VAR42);
}
}
else
VAR10 = VAR43;

return(VAR10);
} 



int FUN17(

VAR12               *VAR13,
const VAR34  &VAR35,
const VAR44::VAR33 &VAR45,
int                VAR46)

{
int      VAR10 = VAR36;
int      VAR47;
VAR48 *VAR49 = NULL;

for (int VAR23 = 0; VAR23 < VAR13->VAR24; VAR23++)
{
if (VAR45 == VAR13->VAR25[VAR23].VAR26)
{
VAR49 = VAR13->VAR25 + VAR23;
break;
}
}

if (VAR49 == NULL)
return(-1);

VAR10 = FUN18(VAR13,
VAR49,
VAR35.argv,
VAR35.VAR40,
VAR50,
VAR46,
&VAR47);

return(VAR10);
} 



int FUN19(

VAR12              *VAR13,
const VAR34 &VAR35,
int               VAR46)

{
VAR44::string  VAR51;
int          VAR10 = VAR11;


for (size_t VAR23 = 0; VAR23 < VAR35.VAR5; VAR23++)
{
if (!strcmp(VAR35.VAR4[VAR23].VAR30, VAR31))
{
VAR51 = VAR35.VAR4[VAR23].VAR32.VAR6.VAR33;
}
}

if (VAR51.FUN20() == 0)
{

if ((*VAR13->VAR41)[VAR15].FUN21(VAR35.VAR42))
VAR10 = FUN13(VAR13, VAR35);
else
{
bool VAR52 = false;

for (VAR44::VAR53<VAR44::VAR33, VAR54>::iterator VAR55 = VAR13->VAR41->FUN22();
VAR55 != VAR13->VAR41->FUN23();
VAR55++)
{

if (VAR55->VAR56 == VAR15)
continue;
else if ((*VAR13->VAR41)[VAR55->VAR56].FUN21(VAR35.VAR42))
{
VAR10 = FUN17(VAR13,
VAR35,
VAR55->VAR56,
VAR46);
VAR52 = true;
break;
}
}

if (VAR52 == false)
VAR10 = FUN13(VAR13, VAR35);
}
}
else if (VAR51 == VAR15)
{

VAR10 = FUN13(VAR13, VAR35);
}
else
{

VAR10 = FUN17(VAR13,
VAR35,
VAR51,
VAR46);
}

return(VAR10);
} 





VAR1 FUN24(

const VAR17   *VAR18,
const pmix_info_t    VAR57[],
size_t               VAR5,
const pmix_app_t     VAR27[],
size_t               VAR28,
pmix_spawn_cbfunc_t  VAR8,
void                *VAR9)

{
pmix_status_t     VAR10 = VAR11;
VAR12              *VAR13 = FUN2(VAR18->VAR14);
struct timeval    VAR58;
time_t            VAR59;
time_t            VAR60 = 0;


memset(&VAR58, 0, sizeof(VAR58));

if (VAR13 == NULL)
VAR10 = VAR16;
else
{
VAR10 = FUN12(VAR27, VAR28, VAR13);

for (size_t VAR23 = 0; VAR23 < VAR5; VAR23++)
{
if (!strcmp(VAR57[VAR23].VAR30, VAR61))
{
memcpy(&VAR58, &VAR57[VAR23].VAR32.VAR6.VAR62, sizeof(VAR58));
}

}

if (VAR58.VAR63 != 0)
{
VAR59 = FUN25(NULL);
if (VAR64 > VAR58.VAR63)
{
VAR60 = VAR64;
VAR64 = VAR58.VAR63;
}
}

for (size_t VAR23 = 0; VAR23 < VAR28; VAR23++)
{
int VAR65 = FUN19(VAR13, VAR27[VAR23], VAR18->VAR66);
if (VAR65 != VAR36)
{

break;
}
else if (FUN25(NULL) - VAR59 >= VAR58.VAR63)
{
VAR10 = VAR67;
break;
}
}

if (VAR60 != 0)
{
VAR64 = VAR60;
}
}

return(VAR10);
} 



int FUN26(

const pmix_proc_t VAR2[],
size_t            VAR3)

{
for (VAR44::VAR53<unsigned int, VAR68>::iterator VAR55 = VAR69.FUN22();
VAR55 != VAR69.FUN23();
VAR55++)
{
if (VAR55->VAR70.FUN27(VAR2, VAR3) == true)
return(VAR55->VAR56);
}

return(0);
} 



VAR1 FUN28(

const pmix_proc_t  VAR2[],
size_t             VAR3,
const pmix_info_t  VAR4[],
size_t             VAR5,
pmix_op_cbfunc_t   VAR8,
void              *VAR9)

{
pmix_status_t     VAR10 = VAR11;
VAR12              *VAR13 = FUN2(VAR2[0].VAR14);
struct timeval    VAR58;
bool              VAR71 = false;

memset(&VAR58, 0, sizeof(VAR58));

if (VAR13 != NULL)
{
for (size_t VAR23 = 0; VAR23 < VAR5; VAR23++)
{
if (!strcmp(VAR4[VAR23].VAR30, VAR61))
{
memcpy(&VAR58, &VAR4[VAR23].VAR32.VAR6.VAR62, sizeof(VAR58));
}
}

if (FUN26(VAR2, VAR3) == 0)
{
VAR68 connect(VAR13, VAR2, VAR3, VAR8, VAR9);
VAR69[connect.FUN29()] = connect;
VAR10 = connect.FUN30(VAR13, VAR58.VAR63);

if (VAR10 == VAR11)
VAR71 = true;
}
}
else
VAR10 = VAR16;

if (VAR71 == false)
FUN31(VAR10, VAR9);

return(VAR10);
} 



VAR1 FUN32(

const pmix_proc_t  VAR2[],
size_t             VAR3,
const pmix_info_t  VAR4[],
size_t             VAR5,
pmix_op_cbfunc_t   VAR8,
void              *VAR9)

{
pmix_status_t     VAR10 = VAR11;
VAR12              *VAR13 = FUN2(VAR2[0].VAR14);
struct timeval    VAR58;
bool              VAR71 = false;

memset(&VAR58, 0, sizeof(VAR58));

if (VAR13 != NULL)
{
for (size_t VAR23 = 0; VAR23 < VAR5; VAR23++)
{
if (!strcmp(VAR4[VAR23].VAR30, VAR61))
{
memcpy(&VAR58, &VAR4[VAR23].VAR32.VAR6.VAR62, sizeof(VAR58));
}
}

unsigned int VAR72 = FUN26(VAR2, VAR3);

if (VAR72 == 0)
{
VAR10 = VAR16;
}
else
{
VAR68 connect(VAR13, VAR2, VAR3, VAR8, VAR9, VAR73);
connect.FUN33(VAR72);
VAR10 = connect.FUN30(VAR13, VAR58.VAR63);


VAR44::VAR53<unsigned int, VAR68>::iterator VAR55 = VAR69.FUN34(VAR72);
if (VAR55 != VAR69.FUN23())
VAR69.FUN35(VAR55);

if (VAR10 == VAR11)
VAR71 = true;
}
}
else
VAR10 = VAR16;

if (VAR71 == false)
FUN31(VAR10, VAR9);

return(VAR10);
} 



VAR1 FUN36(

const pmix_info_t     VAR4[],
size_t                VAR5,
pmix_op_cbfunc_t      VAR8,
void                  *VAR9)

{
return(VAR19);
}



VAR1 FUN37(

const pmix_info_t     VAR4[],
size_t                VAR5,
pmix_op_cbfunc_t      VAR8,
void                  *VAR9)

{
return(VAR19);
} 

pmix_server_module_t VAR74 =
{
VAR75,
VAR76,
VAR77,
VAR78,
VAR79,
VAR80,
VAR81,
VAR82,
VAR83,
VAR84,
VAR85,
VAR86,
VAR87
};