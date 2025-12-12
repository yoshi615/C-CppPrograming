class Date { 
    int y; // 年 
    int m; // 月 
    int d; // 日 
public: 
    // コンストラクタ (宣言) 
    Date(int yy, int mm, int dd); 
 
    // ゲッタ (クラス定義内で定義、暗黙的インライン) 
    int year() { return y; } 
    int month() { return m; } 
    int day() { return d; } 
};