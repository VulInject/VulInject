static int mod_init( void )
{

if (acc_load_api(&accb)<0) {
LM_ERR("cannot bind to ACC API\n");
return -1;
}


if (diameter_extra_str
&& (diameter_extra=accb.parse_extra(diameter_extra_str))==0 ) {
LM_ERR("failed to parse diameter_extra param\n");
return -1;
}

memset(&_acc_diameter_engine, 0, sizeof(acc_engine_t));

if(diameter_flag != -1)
_acc_diameter_engine.acc_flag	   = diameter_flag;
if(diameter_missed_flag != -1)
_acc_diameter_engine.missed_flag = diameter_missed_flag;
_acc_diameter_engine.acc_req     = acc_diameter_send_request;
_acc_diameter_engine.acc_init    = acc_diameter_init;
memcpy(_acc_diameter_engine.name, "diameter", 8);
if(accb.register_engine(&_acc_diameter_engine)<0)
{
LM_ERR("cannot register ACC DIAMETER engine\n");
return -1;
}

return 0;
}