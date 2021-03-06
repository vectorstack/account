// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from auth.djinni

package me.ppxpp.account.auth;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Push {
    public abstract void connect();

    public static Push create(String host, String device, PushListener listener)
    {
        return CppProxy.create(host,
                               device,
                               listener);
    }

    private static final class CppProxy extends Push
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void _djinni_private_destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            _djinni_private_destroy();
            super.finalize();
        }

        @Override
        public void connect()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_connect(this.nativeRef);
        }
        private native void native_connect(long _nativeRef);

        public static native Push create(String host, String device, PushListener listener);
    }
}
