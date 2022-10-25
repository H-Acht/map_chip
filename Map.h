#pragma once

#include <vector>

class Map
{
public:
	Map();
	virtual ~Map();

	//グラフィックデータのロード、アンロード
	void load();
	void unload();

	void update();

	//描画
	void draw();

private:
	//マップの描画
	void drawMap(int offsetX, int offsetY);
	//マップチップ編集用カーソル
	void drawCursor();

	//マップチップの数を取得する
	int chipNumX();
	int chipNumY();
	int chipNum();

	//マップデータの入出力
	void outputData();	//マップデータの出力
	void readData();	//マップデータの入力


private:
	//グラフィックデータのハンドル
	int m_handle;

	//グラフィックのデータ
	int m_graphWidth;
	int m_graphHeight;

	//マップチップ編集用データ
	int m_cursorNo;
	std::vector<int> m_mapData;

	int m_scrollX;
	int m_scrollY;
};