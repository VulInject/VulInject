static void AAOut_Shutdown(GF_AudioOutput *dr)
{
DroidContext *ctx = (DroidContext *)dr->opaque;
JNIEnv* env = NULL;
jint res = 0;

GF_LOG(GF_LOG_INFO, GF_LOG_MMIO, ("[AndroidAudio] Shutdown" ));

res = (*GetJavaVM())->GetEnv(GetJavaVM(), (void**)&env, JNI_VERSION_1_2);
if ( res == JNI_EDETACHED ) {
(*GetJavaVM())->AttachCurrentThread(GetJavaVM(), &env, NULL);
}

(*env)->CallNonvirtualVoidMethod(env, ctx->obj_AudioTrack, ctx->class_AudioTrack, ctx->fun_Stop);
(*env)->CallNonvirtualVoidMethod(env, ctx->obj_AudioTrack, ctx->class_AudioTrack, ctx->fun_Release);

(*env)->PopLocalFrame(env, NULL);

(*env)->DeleteGlobalRef(env, ctx->buff);
(*env)->DeleteGlobalRef(env, ctx->obj_AudioTrack);
(*env)->DeleteGlobalRef(env, ctx->class_AudioTrack);


(*GetJavaVM())->DetachCurrentThread(GetJavaVM());

}