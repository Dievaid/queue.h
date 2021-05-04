<h1 align = "center">Queue library</h1>

<h3>Functions use:</h3>


1. <span style = "color: yellow;">createQueue</span>
2. <span style = "color: yellow;">en</span>
3. <span style = "color: yellow;">de</span>


<h3>Examples: </h3>

1. Queue* queue = createQueue();
2. en(queue, (yourDataType*)&yourVariable);
3. yourVariable = *(yourDataType**)de(queue);  
-> Use * before the paranthesis with yourDataType pointer or it will give you a compile error. I cannot modify the example because it will bold it.

<h2>Hints</h2>
  -> Include this header after including "stdlib.h" or you will get warnings
