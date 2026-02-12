OPENMPT_WINESUPPORT_WRAPPER_API uintptr_t OPENMPT_WINESUPPORT_WRAPPER_CALL OpenMPT_Wine_Wrapper_SoundDevice_Open( OpenMPT_Wine_Wrapper_SoundDevice * sd, const char * settings ) {
uintptr_t result = 0;
result = OpenMPT_SoundDevice_Open( sd->impl, settings );
if ( result ) {
DWORD threadId = 0;
sd->audiothread_startup_done = CreateEvent( NULL, FALSE, FALSE, NULL );
sd->audiothread_sem_request = OpenMPT_Semaphore_Construct();
sd->audiothread_sem_done = OpenMPT_Semaphore_Construct();
sd->audiothread_command = AudioThreadCommandInvalid;
sd->audiothread = CreateThread( NULL, 0, &AudioThread, sd, 0, &threadId );
WaitForSingleObject( sd->audiothread_startup_done, INFINITE );
}
return result;
}