Status_t
SM_Get_PortInfo(SmMaiHandle_t *fd, uint32_t amod, SmpAddr_t *addr, STL_PORT_INFO *pip) {
Status_t status; 
uint32_t bufferLength = sizeof(STL_PORT_INFO); 
uint8_t buffer[bufferLength]; 

INCREMENT_COUNTER(smCounterGetPortInfo);

status = sm_get_stl_attribute(fd, STL_MCLASS_ATTRIB_ID_PORT_INFO, amod, addr, buffer, &bufferLength);
if (status == VSTATUS_OK) {
(void)BSWAP_STL_PORT_INFO((STL_PORT_INFO *)buffer); 
memcpy(pip, buffer, sizeof(STL_PORT_INFO));
if (!sm_valid_port_state(&pip->PortStates)) return VSTATUS_BAD;
}


return (status); 
}