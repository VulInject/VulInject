void SV_ClientEnterWorld( client_t *client, usercmd_t *cmd ) {
int		clientNum;
sharedEntity_t *ent;

Com_DPrintf( "Going from CS_PRIMED to CS_ACTIVE for %s\n", client->name );
client->state = CS_ACTIVE;



SV_UpdateConfigstrings( client );


clientNum = client - svs.clients;
ent = SV_GentityNum( clientNum );
ent->s.number = clientNum;
client->gentity = ent;

client->deltaMessage = -1;
client->lastSnapshotTime = 0;	

if(cmd)
memcpy(&client->lastUsercmd, cmd, sizeof(client->lastUsercmd));
else
memset(&client->lastUsercmd, '\0', sizeof(client->lastUsercmd));


VM_Call( gvm, GAME_CLIENT_BEGIN, client - svs.clients );
}