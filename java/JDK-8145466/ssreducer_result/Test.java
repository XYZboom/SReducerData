

import java.util.TimerTask;

public class Test {

    private static class FlusherPool {

        public synchronized void start() {
            new TimerTask() {
                    @Override
                    public void run() {
                        invokeAll(1L);
                    }
                };
            }

        private synchronized void invokeAll(int flushInterval) {
            }

        }

    }