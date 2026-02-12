void sfl_receiver_init(SFLReceiver *receiver, SFLAgent *agent)
{

memset(receiver, 0, sizeof(*receiver));


receiver->agent = agent;


receiver->sFlowRcvrMaximumDatagramSize = SFL_DEFAULT_DATAGRAM_SIZE;
receiver->sFlowRcvrPort = SFL_DEFAULT_COLLECTOR_PORT;


initSocket(receiver);


receiver->sampleCollector.datap = receiver->sampleCollector.data;
putNet32(receiver, SFLDATAGRAM_VERSION5);
putAddress(receiver, &agent->myIP);
putNet32(receiver, agent->subId);


resetSampleCollector(receiver);
}