# 1
  ### 実際のコード
  ```c
  #define MAX_RECIPES 3
  #define MAX_NAME 100
  ...
  char recipe_names[MAX_RECIPES][MAX_NAME];
  ```

  ### どうしてリーダブルだと思っているのか
  配列の要素数に名前をつけることにより意味がわかりやすくなる
  特に2次元配列だと1番目と2番めを混同することが多い気がする
  定数だということがわかるように大文字にした。


# 2
  ### 実際のコード
  ```c
  while(recipe_count<MAX_RECIPES){
    if(!fgets(recipe_names[recipe_count], MAX_NAME, f_recipe)) break;
    else {
      recipe_count++;
    }
  }
  ```
  ### リーダブルだと思う理由
  ループ用変数にrecipe_countという名前をつけた。
  "全部でいくつのレシピを読み込んだか"は後で参照する価値がると思ったので