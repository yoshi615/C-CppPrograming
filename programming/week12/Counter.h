#ifndef TEST12_1_H
#define TEST12_1_H

#include <climits> // UINT_MAX を使用するため 
 
//===== カウンタクラス =====// 
class Counter 
{ 
    unsigned int cnt; // カウンタ（符号なし整数） 
 
public: 
    //--- コンストラクタ --- 
    Counter() : cnt(0) {} 
 
    //--- カウンタアップ --- 
    void increment() 
    { 
        // オーバーフローを防止 
        if (cnt < UINT_MAX) 
            cnt++; 
    } 
 
    //--- カウンタダウン --- 
    void decrement() 
    { 
        // アンダーフローを防止 
        if (cnt > 0) 
            cnt--; 
    } 
 
    //--- カウンタを返す --- 
    unsigned int value() const 
    { 
        return cnt; 
    } 
}; 
 
#endif