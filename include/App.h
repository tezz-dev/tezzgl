//
// Created by tezz-io on 12/12/21.
//

#ifndef TEZZGL_APP_H
#define TEZZGL_APP_H

class App {
    void pollEvents();
    void waitEvents();
    void waitEventsTimeout(double timeout);
    void postEmptyEvent();
};

#endif //TEZZGL_APP_H
