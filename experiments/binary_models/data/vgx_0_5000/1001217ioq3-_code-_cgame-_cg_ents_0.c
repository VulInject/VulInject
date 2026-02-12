void CG_PositionEntityOnTag( refEntity_t *entity, const refEntity_t *parent, 
qhandle_t parentModel, char *tagName ) {
int				i;
orientation_t	lerped;


trap_R_LerpTag( &lerped, parentModel, parent->oldframe, parent->frame,
1.0 - parent->backlerp, tagName );


VectorCopy( parent->origin, entity->origin );
for ( i = 0 ; i < 3 ; i++ ) {
VectorMA( entity->origin, lerped.origin[i], parent->axis[i], entity->origin );
}


MatrixMultiply( lerped.axis, ((refEntity_t *)parent)->axis, entity->axis );
entity->backlerp = parent->backlerp;
}