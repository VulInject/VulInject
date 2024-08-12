of this software and associated documentation FUN1 (VAR1 ""), to VAR2
in the Software without VAR3, including without limitation the VAR4
to VAR5, copy, VAR6, VAR7, VAR8, VAR9, VAR10, and/or VAR11
copies of the VAR12, and to permit persons to whom the Software VAR13
furnished to do VAR14, subject to the following VAR15:

The above copyright notice and this permission notice shall be included VAR16
all copies or substantial portions of the VAR12.

THE SOFTWARE IS VAR17 "", WITHOUT WARRANTY OF ANY VAR18, EXPRESS VAR19
VAR20, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF VAR21,
FITNESS FOR A PARTICULAR PURPOSE AND VAR22.  IN NO EVENT SHALL VAR23
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY VAR24, DAMAGES OR VAR25
VAR26, WHETHER IN AN ACTION OF VAR27, TORT OR VAR28, ARISING VAR29,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS VAR30
THE VAR31.

















typedef struct  VAR32
{
FT_CMapRec    VAR33;
FT_ULong      VAR34;
PCF_Encoding  VAR35;

} VAR36, *VAR37;


FUN2( VAR38 )
FUN3( FT_CMap     VAR39,   
FT_Pointer  VAR40 )
{
PCF_CMap  VAR41 = (VAR37)VAR39;
PCF_Face  VAR42 = (VAR43)FUN4( VAR39 );

FUN5( VAR40 );


VAR41->VAR34 = VAR42->VAR44;
VAR41->VAR35     = VAR42->VAR35;

return VAR45;
}


FUN2( void )
FUN6( FT_CMap  VAR39 )         
{
PCF_CMap  VAR41 = (VAR37)VAR39;


VAR41->VAR35     = NULL;
VAR41->VAR34 = 0;
}


FUN2( VAR46 )
FUN7( FT_CMap    VAR39,  
FT_UInt32  VAR47 )
{
PCF_CMap      VAR41      = (VAR37)VAR39;
PCF_Encoding  VAR35 = VAR41->VAR35;
FT_ULong      VAR48, VAR49, VAR50;
FT_UInt       VAR51    = 0;


VAR48 = 0;
VAR49 = VAR41->VAR34;

while ( VAR48 < VAR49 )
{
FT_ULong  VAR52;


VAR50  = ( VAR48 + VAR49 ) >> 1;
VAR52 = (VAR53)VAR35[VAR50].VAR54;

if ( VAR47 == VAR52 )
{
VAR51 = VAR35[VAR50].VAR55 + 1;
break;
}

if ( VAR47 < VAR52 )
VAR49 = VAR50;
else
VAR48 = VAR50 + 1;
}

return VAR51;
}


FUN2( VAR46 )
FUN8( FT_CMap    VAR39,   
VAR56  *VAR57 )
{
PCF_CMap      VAR41      = (VAR37)VAR39;
PCF_Encoding  VAR35 = VAR41->VAR35;
FT_ULong      VAR48, VAR49, VAR50;
FT_ULong      VAR47  = *VAR57 + 1;
FT_UInt       VAR51    = 0;


VAR48 = 0;
VAR49 = VAR41->VAR34;

while ( VAR48 < VAR49 )
{
FT_ULong  VAR52;


VAR50  = ( VAR48 + VAR49 ) >> 1;
VAR52 = (VAR53)VAR35[VAR50].VAR54;

if ( VAR47 == VAR52 )
{
VAR51 = VAR35[VAR50].VAR55 + 1;
goto VAR58;
}

if ( VAR47 < VAR52 )
VAR49 = VAR50;
else
VAR48 = VAR50 + 1;
}

VAR47 = 0;
if ( VAR48 < VAR41->VAR34 )
{
VAR47 = (VAR53)VAR35[VAR48].VAR54;
VAR51   = VAR35[VAR48].VAR55 + 1;
}

VAR58:
if ( VAR47 > 0xFFFFFFFFUL )
{
FUN9(( "" ));
*VAR57 = 0;

}
else
*VAR57 = (VAR56)VAR47;
return VAR51;
}


static
const FT_CMap_ClassRec  VAR59 =
{
sizeof ( VAR36 ),
VAR60,
VAR61,
VAR62,
VAR63,

NULL, NULL, NULL, NULL, NULL
};


FUN2( void )
FUN10( FT_Face  VAR64 )         
{
PCF_Face   VAR42 = (VAR43)VAR64;
FT_Memory  VAR65;


if ( !VAR42 )
return;

VAR65 = FUN11( VAR42 );

FUN12( VAR42->VAR35 );
FUN12( VAR42->VAR66 );


if ( VAR42->VAR67 )
{
FT_Int  VAR68;


for ( VAR68 = 0; VAR68 < VAR42->VAR69; VAR68++ )
{
PCF_Property  VAR70 = &VAR42->VAR67[VAR68];


if ( VAR70 )
{
FUN12( VAR70->VAR71 );
if ( VAR70->VAR72 )
FUN12( VAR70->VAR73.VAR74 );
}
}

FUN12( VAR42->VAR67 );
}

FUN12( VAR42->VAR75.VAR76 );
FUN12( VAR64->VAR77 );
FUN12( VAR64->VAR78 );
FUN12( VAR64->VAR79 );
FUN12( VAR42->VAR80 );
FUN12( VAR42->VAR81 );


if ( VAR64->VAR82 == &VAR42->VAR83 )
{
FUN13( &VAR42->VAR83 );
VAR64->VAR82 = VAR42->VAR84;
}
}


FUN2( VAR38 )
FUN14( FT_Stream      VAR82,
FT_Face        VAR64,        
FT_Int         VAR85,
FT_Int         VAR86,
VAR87*  VAR88 )
{
PCF_Face  VAR42  = (VAR43)VAR64;
FT_Error  VAR89;

FUN5( VAR86 );
FUN5( VAR88 );


FUN15(( "" ));

VAR89 = FUN16( VAR82, VAR42, VAR85 );
if ( VAR89 )
{
FUN10( VAR64 );

FUN17( VAR90 )   || \
FUN17( VAR91 )

{
FT_Error  VAR92;



FUN15(( "" ));
VAR92 = FUN18( &VAR42->VAR83, VAR82 );
if ( FUN19( VAR92, VAR93 ) )
goto VAR94;

VAR89 = VAR92;
}

if ( VAR89 )
{
FT_Error  VAR95;



FUN15(( "" ));
VAR95 = FUN20( &VAR42->VAR83, VAR82 );
if ( FUN19( VAR95, VAR93 ) )
goto VAR94;

VAR89 = VAR95;
}

if ( VAR89 )
{
FT_Error  VAR96;



FUN15(( "" ));
VAR96 = FUN21( &VAR42->VAR83, VAR82 );
if ( FUN19( VAR96, VAR93 ) )
goto VAR94;

VAR89 = VAR96;
}

if ( VAR89 )
goto VAR94;

VAR42->VAR84 = VAR82;
VAR64->VAR82   = &VAR42->VAR83;

VAR82 = VAR64->VAR82;

VAR89 = FUN16( VAR82, VAR42, VAR85 );
if ( VAR89 )
goto VAR94;


goto VAR94;

}


if ( VAR85 < 0 )
goto VAR58;
else if ( VAR85 > 0 && ( VAR85 & 0xFFFF ) > 0 )
{
FUN22(( "" ));
FUN10( VAR64 );
return FUN23( VAR97 );
}


{
VAR98  *VAR81 = VAR42->VAR81;
VAR98  *VAR80 = VAR42->VAR80;
FT_Bool     VAR99  = 0;


if ( VAR81 && VAR80 )
{
char*  VAR100 = VAR81;



if ( ( VAR100[0] == '' || VAR100[0] == '' ) &&
( VAR100[1] == '' || VAR100[1] == '' ) &&
( VAR100[2] == '' || VAR100[2] == '' ) )
{
VAR100 += 3;
if ( !FUN24( VAR100, "" )                      ||
( !FUN24( VAR100, "" ) &&
!FUN24( VAR42->VAR80, "" ) ) )
VAR99 = 1;

else if ( !FUN24( VAR100, "" )                 &&
!FUN24( VAR42->VAR80, "" ) )
VAR99 = 1;
}
}

{
FT_CharMapRec  VAR101;


VAR101.VAR42        = FUN25( VAR42 );
VAR101.VAR102    = VAR103;

VAR101.VAR104 = VAR105;
VAR101.VAR106 = VAR107;

if ( VAR99 )
{
VAR101.VAR102    = VAR108;
VAR101.VAR104 = VAR109;
VAR101.VAR106 = VAR110;
}

VAR89 = FUN26( &VAR59, NULL, &VAR101, NULL );
}
}

VAR58:
return VAR89;

VAR94:
FUN15(( "" ));
FUN10( VAR64 );
VAR89 = FUN23( VAR111 );  
goto VAR58;
}


FUN2( VAR38 )
FUN27( FT_Size   VAR112,
FT_ULong  VAR113 )
{
PCF_Accel  VAR114 = &( (VAR43)VAR112->VAR42 )->VAR114;


FUN28( VAR112->VAR42, VAR113 );

VAR112->VAR66.VAR115    =  VAR114->VAR116 * 64;
VAR112->VAR66.VAR117   = -VAR114->VAR118 * 64;
VAR112->VAR66.VAR119 =  VAR114->VAR120.VAR121 * 64;

return VAR45;
}


FUN2( VAR38 )
FUN29( FT_Size          VAR112,
FT_Size_Request  VAR122 )
{
PCF_Face         VAR42  = (VAR43)VAR112->VAR42;
VAR123*  VAR124 = VAR112->VAR42->VAR79;
FT_Error         VAR89 = FUN30( VAR125 );
FT_Long          VAR126;


VAR126 = FUN31( VAR122 );
VAR126 = ( VAR126 + 32 ) >> 6;

switch ( VAR122->VAR127 )
{
case VAR128:
if ( VAR126 == ( ( VAR124->VAR129 + 32 ) >> 6 ) )
VAR89 = VAR45;
break;

case VAR130:
if ( VAR126 == ( VAR42->VAR114.VAR116 +
VAR42->VAR114.VAR118 ) )
VAR89 = VAR45;
break;

default:
VAR89 = FUN23( VAR93 );
break;
}

if ( VAR89 )
return VAR89;
else
return FUN27( VAR112, 0 );
}


FUN2( VAR38 )
FUN32( FT_GlyphSlot  VAR131,
FT_Size       VAR112,
FT_UInt       VAR132,
FT_Int32      VAR133 )
{
PCF_Face    VAR42   = (VAR43)FUN33( VAR112 );
FT_Stream   VAR82;
FT_Error    VAR89  = VAR45;
VAR134*  VAR135 = &VAR131->VAR135;
PCF_Metric  VAR136;
FT_ULong    VAR137;


FUN9(( "", VAR132 ));

if ( !VAR42 )
{
VAR89 = FUN23( VAR138 );
goto VAR58;
}

if ( VAR132 >= (VAR46)VAR42->VAR33.VAR139 )
{
VAR89 = FUN23( VAR97 );
goto VAR58;
}

VAR82 = VAR42->VAR33.VAR82;

if ( VAR132 > 0 )
VAR132--;

VAR136 = VAR42->VAR66 + VAR132;

VAR135->VAR140       = (unsigned int)( VAR136->VAR141 +
VAR136->VAR142 );
VAR135->VAR143      = (unsigned int)( VAR136->VAR144 -
VAR136->VAR145 );
VAR135->VAR146  = 1;
VAR135->VAR147 = VAR148;

switch ( FUN34( VAR42->VAR149 ) )
{
case 1:
VAR135->VAR150 = (int)( ( VAR135->VAR143 + 7 ) >> 3 );
break;

case 2:
VAR135->VAR150 = (int)( ( ( VAR135->VAR143 + 15 ) >> 4 ) << 1 );
break;

case 4:
VAR135->VAR150 = (int)( ( ( VAR135->VAR143 + 31 ) >> 5 ) << 2 );
break;

case 8:
VAR135->VAR150 = (int)( ( ( VAR135->VAR143 + 63 ) >> 6 ) << 3 );
break;

default:
return FUN23( VAR151 );
}

VAR131->VAR152      = VAR153;
VAR131->VAR154 = VAR136->VAR145;
VAR131->VAR155  = VAR136->VAR141;

VAR131->VAR66.VAR156  = (VAR157)( VAR136->VAR121 * 64 );
VAR131->VAR66.VAR158 = (VAR157)( VAR136->VAR145 * 64 );
VAR131->VAR66.VAR159 = (VAR157)( VAR136->VAR141 * 64 );
VAR131->VAR66.VAR143        = (VAR157)( ( VAR136->VAR144 -
VAR136->VAR145 ) * 64 );
VAR131->VAR66.VAR126       = (VAR157)( VAR135->VAR140 * 64 );

FUN35( &VAR131->VAR66,
( VAR42->VAR114.VAR116 +
VAR42->VAR114.VAR118 ) * 64 );

if ( VAR133 & VAR160 )
goto VAR58;


VAR137 = (VAR53)VAR135->VAR150 * VAR135->VAR140;

VAR89 = FUN36( VAR131, (VAR53)VAR137 );
if ( VAR89 )
goto VAR58;

if ( FUN37( VAR136->VAR161 )          ||
FUN38( VAR135->VAR162, VAR137 ) )
goto VAR58;

if ( FUN39( VAR42->VAR149 ) != VAR163 )
FUN40( VAR135->VAR162, VAR137 );

if ( ( FUN41( VAR42->VAR149 ) !=
FUN39( VAR42->VAR149 )  ) )
{
switch ( FUN42( VAR42->VAR149 ) )
{
case 1:
break;

case 2:
FUN43( VAR135->VAR162, VAR137 );
break;

case 4:
FUN44( VAR135->VAR162, VAR137 );
break;
}
}

VAR58:
return VAR89;
}




static VAR38
FUN45( PCF_Face          VAR42,
const char*       VAR164,
VAR165  *VAR166 )
{
PCF_Property  VAR70;


VAR70 = FUN46( VAR42, VAR164 );
if ( VAR70 )
{
if ( VAR70->VAR72 )
{
VAR166->VAR127   = VAR167;
VAR166->VAR168.VAR74 = VAR70->VAR73.VAR74;
}
else
{
if ( VAR70->VAR73.VAR169 > 0x7FFFFFFFL          ||
VAR70->VAR73.VAR169 < ( -1 - 0x7FFFFFFFL ) )
{
FUN9(( "" ));
FUN9(( "" ));
}


VAR166->VAR127      = VAR170;
VAR166->VAR168.VAR171 = (VAR172)VAR70->VAR73.VAR169;
}

return VAR45;
}

return FUN23( VAR97 );
}


static VAR38
FUN47( PCF_Face      VAR42,
const char*  *VAR173,
const char*  *VAR174 )
{
*VAR173 = VAR42->VAR80;
*VAR174 = VAR42->VAR81;

return VAR45;
}


static const FT_Service_BDFRec  VAR175 =
{
(VAR176)VAR177,     
(VAR178) VAR179    
};



static VAR38
FUN48( FT_Module    VAR180,         
const char*  VAR181,
const void*  VAR73,
FT_Bool      VAR182 )
{

FT_Error    VAR89  = VAR45;
PCF_Driver  VAR183 = (VAR184)VAR180;

FUN5( VAR182 );


if ( !FUN24( VAR181, "" ) )
{
if ( VAR182 )
{
const char*  VAR100   = (const char*)VAR73;
long         VAR185 = FUN49( VAR100, NULL, 10 );


if ( VAR185 == 0 )
VAR183->VAR186 = 0;
else if ( VAR185 == 1 )
VAR183->VAR186 = 1;
else
return FUN23( VAR97 );
}
else
{
VAR187*  VAR186 = (VAR187*)VAR73;


VAR183->VAR186 = *VAR186;
}

return VAR89;
}


FUN5( VAR180 );
FUN5( VAR73 );
FUN5( VAR182 );
FUN5( VAR181 );


FUN50(( "",
VAR181 ));
return FUN23( VAR188 );
}


static VAR38
FUN51( FT_Module    VAR180,         
const char*  VAR181,
const void*  VAR73 )
{

FT_Error    VAR89  = VAR45;
PCF_Driver  VAR183 = (VAR184)VAR180;


if ( !FUN24( VAR181, "" ) )
{
FT_Bool   VAR186 = VAR183->VAR186;
VAR187*  VAR189                  = (VAR187*)VAR73;


*VAR189 = VAR186;

return VAR89;
}


FUN5( VAR180 );
FUN5( VAR73 );
FUN5( VAR181 );


FUN50(( "",
VAR181 ));
return FUN23( VAR188 );
}


FUN52(
VAR190,

(VAR191)VAR192,      
(VAR193)VAR194 )     




static const FT_ServiceDescRec  VAR195[] =
{
{ VAR196,         &VAR175 },
{ VAR197, VAR198 },
{ VAR199,  &VAR190 },
{ NULL, NULL }
};


FUN2( VAR200 )
FUN53( FT_Module    VAR180,
const char*  VAR71 )
{
FUN5( VAR180 );

return FUN54( VAR195, VAR71 );
}


FUN2( VAR38 )
FUN55( FT_Module  VAR180 )      
{
PCF_Driver  VAR183 = (VAR184)VAR180;


VAR183->VAR186 = 0;
FUN5( VAR180 );

return VAR45;
}


FUN2( void )
FUN56( FT_Module  VAR180 )      
{
FUN5( VAR180 );
}


VAR201
const FT_Driver_ClassRec  VAR202 =
{
{
VAR203        |
VAR204,

sizeof ( VAR205 ),
"",
0x10000L,
0x20000L,

NULL,   

VAR206,          
VAR207,          
VAR208      
},

sizeof ( VAR209 ),
sizeof ( VAR210 ),
sizeof ( VAR211 ),

VAR212,              
VAR213,              
NULL,                       
NULL,                       
NULL,                       
NULL,                       

VAR214,             

NULL,                       
NULL,                       
NULL,                       

VAR215,           
VAR216             
};