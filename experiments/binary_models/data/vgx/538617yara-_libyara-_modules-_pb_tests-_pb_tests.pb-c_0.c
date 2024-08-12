void FUN1(
VAR1 *VAR2,
VAR3 *VAR4)
{
if (!VAR2)
return;
assert(VAR2->VAR5.VAR6 == &VAR7);
FUN2((VAR8 *) VAR2, VAR4);
}
static const VAR9
VAR10[2] = {
{
"",
1,
VAR11,
VAR12,
FUN3(VAR13, VAR14),
FUN3(VAR13, VAR15),
NULL,
NULL,
0, 
0,
NULL,
NULL 
},
{
"",
2,
VAR11,
VAR16,
0, 
FUN3(VAR13, VAR17),
NULL,
NULL,
0, 
0,
NULL,
NULL 
},
};
static const unsigned VAR18[] = {
0, 
1, 
};
static const VAR19
VAR20[1 + 1] = {{1, 0}, {0, 2}};
const ProtobufCMessageDescriptor VAR21 = {
VAR22,
"",
"",
"",
"",
sizeof(VAR13),
2,
VAR10,
VAR18,
1,
VAR20,
(VAR23) VAR24,
NULL,
NULL,
NULL 
};
static const ProtobufCEnumValue VAR25[2] = {
{"", "", 0},
{"", "", 1},
};
static const ProtobufCIntRange VAR26[] = {
{0, 0},
{0, 2}};
static const VAR27
VAR28[2] = {
{"", 0},
{"", 1},
};
const ProtobufCEnumDescriptor VAR29 = {
VAR30,
"",
"",
"",
"",
2,
VAR25,
2,
VAR28,
1,
VAR26,
NULL,
NULL,
NULL,
NULL 
};
static const ProtobufCFieldDescriptor VAR31[4] = {
{
"",
1,
VAR32,
VAR16,
0, 
FUN3(VAR33, VAR17),
NULL,
NULL,
0, 
0,
NULL,
NULL 
},
{
"",
2,
VAR11,
VAR34,
FUN3(VAR33, VAR35),
FUN3(VAR33, VAR36),
&VAR29,
NULL,
0, 
0,
NULL,
NULL 
},
{
"",
3,
VAR11,
VAR37,
0, 
FUN3(VAR33, VAR38),
&VAR21,
NULL,
0, 
0,
NULL,
NULL 
},
{
"",
4,
VAR39,
VAR37,
FUN3(VAR33, VAR40),
FUN3(VAR33, VAR41),
&VAR21,
NULL,
0, 
0,
NULL,
NULL 
},
};
static const unsigned VAR42[] = {
1, 
2, 
3, 
0, 
};
static const ProtobufCIntRange VAR43[1 + 1] = {
{1, 0},
{0, 4}};
const ProtobufCMessageDescriptor VAR44 = {
VAR22,
"",
"",
"",
"",
sizeof(VAR33),
4,
VAR31,
VAR42,
1,
VAR43,
(VAR23) VAR45,
NULL,
NULL,
NULL 
};
static const ProtobufCFieldDescriptor VAR46[2] = {
{
"",
1,
VAR11,
VAR12,
FUN3(VAR47, VAR14),
FUN3(VAR47, VAR15),
NULL,
NULL,
0, 
0,
NULL,
NULL 
},
{
"",
2,
VAR11,
VAR48,
FUN3(VAR47, VAR49),
FUN3(VAR47, VAR50),
NULL,
NULL,
0, 
0,
NULL,
NULL 
},
};
static const unsigned VAR51[] = {
0, 
1, 
};
static const ProtobufCIntRange VAR52[1 + 1] = {
{1, 0},
{0, 2}};
const ProtobufCMessageDescriptor VAR53 = {
VAR22,
"",
"",
"",
"",
sizeof(VAR47),
2,
VAR46,
VAR51,
1,
VAR52,
(VAR23) VAR54,
NULL,
NULL,
NULL 
};
static const VAR9
VAR55[2] = {
{
"",
1,
VAR11,
VAR16,
0, 
FUN3(VAR56, VAR57),
NULL,
NULL,
0, 
0,
NULL,
NULL 
},
{
"",
2,
VAR11,
VAR12,
FUN3(VAR56, VAR58),
FUN3(VAR56, VAR59),
NULL,
NULL,
0, 
0,
NULL,
NULL 
},
};
static const unsigned
VAR60[] = {
0, 
1, 
};
static const VAR19
VAR61[1 + 1] = {
{1, 0},
{0, 2}};
const VAR62
VAR63 = {
VAR22,
"",
"",
"",
"",
sizeof(VAR56),
2,
VAR55,
VAR60,
1,
VAR61,
(VAR23) VAR64,
NULL,
NULL,
NULL 
};