void CG_Explodef( vec3_t origin, vec3_t dir, int mass, int type, qhandle_t sound, int forceLowGrav, qhandle_t shader, int parent, qboolean damage ) {
int i;
localEntity_t   *le;
refEntity_t     *re;
int howmany;
int pieces[6];              
qhandle_t modelshader = 0;
float materialmul = 1;              

memset( &pieces, 0, sizeof( pieces ) );

if ( type == 5 && damage ) {
vec3_t vec, org;
centity_t *boss;

VectorCopy( cg.refdef.vieworg, org );

for ( boss = cg_entities; boss < &cg_entities[MAX_CLIENTS]; boss++ ) {
if ( !boss->currentValid ) {
continue;
}
if ( boss->currentState.aiChar == AICHAR_HEINRICH ) {
VectorCopy( boss->lerpOrigin, org );
break;
}
}

VectorSubtract( origin, org, vec ); 
vec[2] = 0;
if ( VectorLength( vec ) > 800 ) {
return;
}
mass = (int)( 2.0 * mass * ( 1.0 - ( 0.6 + 0.4 * ( VectorLength( vec ) / 800.0 ) ) ) );
}

pieces[5]   = (int)( mass / 250.0f );
pieces[4]   = (int)( mass / 76.0f );
pieces[3]   = (int)( mass / 37.0f );  
pieces[2]   = (int)( mass / 15.0f );
pieces[1]   = (int)( mass / 10.0f );
pieces[0]   = (int)( mass / 5.0f );

if ( pieces[0] > 20 ) {
pieces[0] = 20;                 
}
if ( pieces[1] > 15 ) {
pieces[1] = 15;
}
if ( pieces[2] > 10 ) {
pieces[2] = 10;
}

if ( type == 0 ) {    
if ( pieces[0] > 10 ) {
pieces[0] = 10;
}
if ( pieces[1] > 10 ) {
pieces[1] = 10;
}
if ( pieces[2] > 10 ) {
pieces[2] = 10;
}
}


if ( type == 5 && damage ) {
pieces[0] = 5;
pieces[1] = 5;
pieces[2] = 4;
pieces[3] = 4;
pieces[4] = 4;
}

if ( sound ) {
trap_S_StartSound( origin, ENTITYNUM_WORLD, CHAN_AUTO, cgs.gameSounds[sound] );
}

if ( shader ) { 
modelshader = shader;
}

for ( i = 0; i < POSSIBLE_PIECES; i++ ) {
leBounceSoundType_t snd = LEBS_NONE;
int hmodel = 0;
float scale;
int endtime;
for ( howmany = 0; howmany < pieces[i]; howmany++ ) {

scale = 1.0f;
endtime = 0;    

switch ( type ) {
case 0: 
snd = LEBS_WOOD;
hmodel = cgs.media.debWood[i];

if ( i == 0 ) {
scale = 0.5f;
} else if ( i == 1 ) {
scale = 0.6f;
} else if ( i == 2 )                           {
scale = 0.7f;
} else if ( i == 3 )                                                               {
scale = 0.5f;
}




if ( i < 3 ) {
endtime = -3000;    
}
break;

case 1: 
snd = LEBS_NONE;
if ( i == 5 ) {
hmodel = cgs.media.shardGlass1;
} else if ( i == 4 ) {
hmodel = cgs.media.shardGlass2;
} else if ( i == 2 )                                             {
hmodel = cgs.media.shardGlass2;
} else if ( i == 1 )                                                                                                   {
hmodel = cgs.media.shardGlass2;
scale = 0.5f;
} else {goto pass;}
break;

case 2: 
snd = LEBS_BRASS;
if ( i == 5 ) {
hmodel = cgs.media.shardMetal1;
} else if ( i == 4 ) {
hmodel = cgs.media.shardMetal2;
} else if ( i == 2 )                                             {
hmodel = cgs.media.shardMetal2;
} else if ( i == 1 )                                                                                                   {
hmodel = cgs.media.shardMetal2;
scale = 0.5f;
} else {goto pass;}
break;

case 3: 
snd = LEBS_BLOOD;
if ( i == 5 ) {
hmodel = cgs.media.gibIntestine;
} else if ( i == 4 ) {
hmodel = cgs.media.gibLeg;
} else if ( i == 2 )                                        {
hmodel = cgs.media.gibChest;
} else { goto pass;}
break;

case 4: 
snd = LEBS_ROCK;
hmodel = cgs.media.debBlock[i];
break;

case 5: 
snd = LEBS_ROCK;
if ( i == 5 ) {
hmodel = cgs.media.debRock[2];                  
} else if ( i == 4 )                                                              {
hmodel = cgs.media.debRock[2];
} else if ( i == 3 )                                                                                                                   {
hmodel = cgs.media.debRock[1];
} else if ( i == 2 )                                                                                                                                                                        {
hmodel = cgs.media.debRock[0];
} else if ( i == 1 )                                                                                                                                                                                                                             {
hmodel = cgs.media.debBlock[1];                 
} else { hmodel = cgs.media.debBlock[0];            
}
if ( i <= 2 ) {
endtime = -2000;    
}
break;

case 6: 
if ( i == 5 ) {
hmodel = cgs.media.debFabric[0];
} else if ( i == 4 ) {
hmodel = cgs.media.debFabric[1];
} else if ( i == 2 )                                              {
hmodel = cgs.media.debFabric[2];
} else if ( i == 1 )                                                                                                     {
hmodel = cgs.media.debFabric[2];
scale = 0.5;
} else {goto pass;  
}
break;
}

le = CG_AllocLocalEntity();
re = &le->refEntity;

le->leType              = LE_FRAGMENT;
le->startTime           = cg.time;

le->endTime             = ( le->startTime + 5000 + random() * 5000 ) + endtime;


if ( snd == LEBS_ROCK && damage ) {
snd = 0;
if ( damage ) {
le->leFlags |= LEF_PLAYER_DAMAGE;
}
le->endTime = le->startTime + 7000 + random() * 5000;
}

if ( parent ) {
le->leFlags     |= LEF_NOTOUCHPARENT;   
le->ownerNum    = parent;
}










le->sizeScale = scale;

if ( type == 1 ) { 


re->fadeStartTime       = le->endTime;
re->fadeEndTime         = le->endTime;
} else {
re->fadeStartTime       = le->endTime - 4000;
re->fadeEndTime         = le->endTime;
}


le->lifeRate    = 1.0 / ( le->endTime - le->startTime );
le->leFlags     |= LEF_TUMBLE;
le->leMarkType  = 0;

VectorCopy( origin, re->origin );
AxisCopy( axisDefault, re->axis );

le->leBounceSoundType = snd;
re->hModel = hmodel;


if ( modelshader ) {
re->customShader = modelshader;
}

re->radius = 1000;

switch ( type ) {
case 6:	
le->pos.trType = TR_GRAVITY_FLOAT;	
le->bounceFactor    = 0.0f;
materialmul         = 0.3f;     
break;
default:
if ( !forceLowGrav && rand() & 1 ) {    
le->pos.trType = TR_GRAVITY;
} else {
le->pos.trType = TR_GRAVITY_LOW;
}
le->bounceFactor    = 0.2f;     
break;
}



le->angles.trType = TR_LINEAR;
le->angles.trTime = cg.time;
le->angles.trBase[0] = rand() & 31;
le->angles.trBase[1] = rand() & 31;
le->angles.trBase[2] = rand() & 31;
le->angles.trDelta[0] = ( ( 100 + ( rand() & 500 ) ) - 300 ) * materialmul;
le->angles.trDelta[1] = ( ( 100 + ( rand() & 500 ) ) - 300 ) * materialmul;
le->angles.trDelta[2] = ( ( 100 + ( rand() & 500 ) ) - 300 ) * materialmul;








VectorCopy( origin, le->pos.trBase );
VectorNormalize( dir );
le->pos.trTime = cg.time;



if ( ( le->angles.trBase[0] == 1 || le->angles.trBase[1] == 1 || le->angles.trBase[2] == 1 ) && type != 6 ) {	
le->pos.trType = TR_GRAVITY;
VectorScale( dir, 10 * 8, le->pos.trDelta );
le->pos.trDelta[0] += ( ( random() * 100 ) - 50 );
le->pos.trDelta[1] += ( ( random() * 100 ) - 50 );
le->pos.trDelta[2] = ( random() * 200 ) + 200;

} else {

VectorScale( dir, 200 + mass, le->pos.trDelta );
le->pos.trDelta[0] += ( ( random() * 100 ) - 50 );
le->pos.trDelta[1] += ( ( random() * 100 ) - 50 );

if ( dir[2] ) {
le->pos.trDelta[2] = random() * 200 * materialmul;  
} else {
le->pos.trDelta[2] = random() * 20;
}

if ( type == 5 && damage ) {
VectorScale( le->pos.trDelta, 4.0, le->pos.trDelta );

while ( VectorLength( le->pos.trDelta ) > 800 ) {
VectorScale( le->pos.trDelta, 0.5, le->pos.trDelta );
}
}
}
}
pass:
continue;
}

}