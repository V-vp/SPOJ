(function(){var g="array",l="complete",m="function",n="number",p="object",q,r=r||{},t=this,u=function(a){return"string"==typeof a},aa=function(a,b,c){a=a.split(".");c=c||t;a[0]in c||!c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c=c[d]&&c[d]!==Object.prototype[d]?c[d]:c[d]={}:c[d]=b},v=function(){},w=function(a){var b=typeof a;if(b==p)if(a){if(a instanceof Array)return g;if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==
c)return p;if("[object Array]"==c||typeof a.length==n&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return g;if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return m}else return"null";else if(b==m&&"undefined"==typeof a.call)return p;return b},x=function(a){var b=w(a);return b==g||b==p&&typeof a.length==n},y=function(a){var b=typeof a;return b==p&&null!=
a||b==m},ba=function(a,b,c){return a.call.apply(a.bind,arguments)},ca=function(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,arguments)}},z=function(a,b,c){z=Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?ba:ca;return z.apply(null,arguments)},da=function(a,b){var c=
Array.prototype.slice.call(arguments,1);return function(){var b=c.slice();b.push.apply(b,arguments);return a.apply(this,b)}},A=function(a,b){function c(){}c.prototype=b.prototype;a.superClass_=b.prototype;a.prototype=new c;a.base=function(a,c,f){for(var d=Array(arguments.length-2),e=2;e<arguments.length;e++)d[e-2]=arguments[e];return b.prototype[c].apply(a,d)}};var ea=String.prototype.trim?function(a){return a.trim()}:function(a){return a.replace(/^[\s\xa0]+|[\s\xa0]+$/g,"")},B=function(a,b){return a<b?-1:a>b?1:0};var fa=Array.prototype.indexOf?function(a,b,c){return Array.prototype.indexOf.call(a,b,c)}:function(a,b,c){c=null==c?0:0>c?Math.max(0,a.length+c):c;if(u(a))return u(b)&&1==b.length?a.indexOf(b,c):-1;for(;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},ha=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e=u(a)?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},ia=Array.prototype.filter?function(a,b,c){return Array.prototype.filter.call(a,
b,c)}:function(a,b,c){for(var d=a.length,e=[],f=0,h=u(a)?a.split(""):a,k=0;k<d;k++)if(k in h){var ta=h[k];b.call(c,ta,k,a)&&(e[f++]=ta)}return e},ja=function(a,b,c){a:{for(var d=a.length,e=u(a)?a.split(""):a,f=0;f<d;f++)if(f in e&&b.call(c,e[f],f,a)){b=f;break a}b=-1}return 0>b?null:u(a)?a.charAt(b):a[b]},C=function(a,b){return 0<=fa(a,b)},ka=function(a,b){b=fa(a,b);var c;(c=0<=b)&&Array.prototype.splice.call(a,b,1);return c},la=function(a,b,c){return 2>=arguments.length?Array.prototype.slice.call(a,
b):Array.prototype.slice.call(a,b,c)};var D;a:{var ma=t.navigator;if(ma){var na=ma.userAgent;if(na){D=na;break a}}D=""};var oa=function(a){var b=[],c=0,d;for(d in a)b[c++]=a[d];return b},pa=function(a){var b=[],c=0,d;for(d in a)b[c++]=d;return b},qa="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" "),ra=function(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<qa.length;f++)c=qa[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}};var E=function(a){E[" "](a);return a};E[" "]=v;var sa=function(a,b,c,d){d=d?d(b):b;return Object.prototype.hasOwnProperty.call(a,d)?a[d]:a[d]=c(b)};var ua=-1!=D.indexOf("Opera"),F=-1!=D.indexOf("Trident")||-1!=D.indexOf("MSIE"),va=-1!=D.indexOf("Edge"),G=-1!=D.indexOf("Gecko")&&!(-1!=D.toLowerCase().indexOf("webkit")&&-1==D.indexOf("Edge"))&&!(-1!=D.indexOf("Trident")||-1!=D.indexOf("MSIE"))&&-1==D.indexOf("Edge"),H=-1!=D.toLowerCase().indexOf("webkit")&&-1==D.indexOf("Edge"),wa=function(){var a=t.document;return a?a.documentMode:void 0},I;
a:{var J="",K=function(){var a=D;if(G)return/rv\:([^\);]+)(\)|;)/.exec(a);if(va)return/Edge\/([\d\.]+)/.exec(a);if(F)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(H)return/WebKit\/(\S+)/.exec(a);if(ua)return/(?:Version)[ \/]?(\S+)/.exec(a)}();K&&(J=K?K[1]:"");if(F){var xa=wa();if(null!=xa&&xa>parseFloat(J)){I=String(xa);break a}}I=J}
var ya=I,za={},L=function(a){return sa(za,a,function(){for(var b=0,c=ea(String(ya)).split("."),d=ea(String(a)).split("."),e=Math.max(c.length,d.length),f=0;0==b&&f<e;f++){var h=c[f]||"",k=d[f]||"";do{h=/(\d*)(\D*)(.*)/.exec(h)||["","","",""];k=/(\d*)(\D*)(.*)/.exec(k)||["","","",""];if(0==h[0].length&&0==k[0].length)break;b=B(0==h[1].length?0:parseInt(h[1],10),0==k[1].length?0:parseInt(k[1],10))||B(0==h[2].length,0==k[2].length)||B(h[2],k[2]);h=h[3];k=k[3]}while(0==b)}return 0<=b})},Aa;var Ba=t.document;
Aa=Ba&&F?wa()||("CSS1Compat"==Ba.compatMode?parseInt(ya,10):5):void 0;var M=function(){this.disposed_=this.disposed_;this.onDisposeCallbacks_=this.onDisposeCallbacks_};M.prototype.disposed_=!1;M.prototype.dispose=function(){this.disposed_||(this.disposed_=!0,this.disposeInternal())};M.prototype.disposeInternal=function(){if(this.onDisposeCallbacks_)for(;this.onDisposeCallbacks_.length;)this.onDisposeCallbacks_.shift()()};var Ca=!F||9<=Number(Aa),Da=F&&!L("9");!H||L("528");G&&L("1.9b")||F&&L("8")||ua&&L("9.5")||H&&L("528");G&&!L("8")||F&&L("9");var Ea=function(){if(!t.addEventListener||!Object.defineProperty)return!1;var a=!1,b=Object.defineProperty({},"passive",{get:function(){a=!0}});t.addEventListener("test",v,b);t.removeEventListener("test",v,b);return a}();var N=function(a,b){this.type=a;this.currentTarget=this.target=b;this.defaultPrevented=this.propagationStopped_=!1;this.returnValue_=!0};N.prototype.preventDefault=function(){this.defaultPrevented=!0;this.returnValue_=!1};var O=function(a,b){N.call(this,a?a.type:"");this.relatedTarget=this.currentTarget=this.target=null;this.button=this.screenY=this.screenX=this.clientY=this.clientX=this.offsetY=this.offsetX=0;this.key="";this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.altKey=this.ctrlKey=!1;this.state=null;this.pointerId=0;this.pointerType="";this.event_=null;a&&this.init(a,b)};A(O,N);var Fa={2:"touch",3:"pen",4:"mouse"};
O.prototype.init=function(a,b){var c=this.type=a.type,d=a.changedTouches?a.changedTouches[0]:null;this.target=a.target||a.srcElement;this.currentTarget=b;if(b=a.relatedTarget){if(G){a:{try{E(b.nodeName);var e=!0;break a}catch(f){}e=!1}e||(b=null)}}else"mouseover"==c?b=a.fromElement:"mouseout"==c&&(b=a.toElement);this.relatedTarget=b;null===d?(this.offsetX=H||void 0!==a.offsetX?a.offsetX:a.layerX,this.offsetY=H||void 0!==a.offsetY?a.offsetY:a.layerY,this.clientX=void 0!==a.clientX?a.clientX:a.pageX,
this.clientY=void 0!==a.clientY?a.clientY:a.pageY,this.screenX=a.screenX||0,this.screenY=a.screenY||0):(this.clientX=void 0!==d.clientX?d.clientX:d.pageX,this.clientY=void 0!==d.clientY?d.clientY:d.pageY,this.screenX=d.screenX||0,this.screenY=d.screenY||0);this.button=a.button;this.keyCode=a.keyCode||0;this.key=a.key||"";this.charCode=a.charCode||("keypress"==c?a.keyCode:0);this.ctrlKey=a.ctrlKey;this.altKey=a.altKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.pointerId=a.pointerId||0;this.pointerType=
u(a.pointerType)?a.pointerType:Fa[a.pointerType]||"";this.state=a.state;this.event_=a;a.defaultPrevented&&this.preventDefault()};O.prototype.preventDefault=function(){O.superClass_.preventDefault.call(this);var a=this.event_;if(a.preventDefault)a.preventDefault();else if(a.returnValue=!1,Da)try{if(a.ctrlKey||112<=a.keyCode&&123>=a.keyCode)a.keyCode=-1}catch(b){}};var Ga="closure_listenable_"+(1E6*Math.random()|0),P=function(a){return!(!a||!a[Ga])},Ha=0;var Ia=function(a,b,c,d,e,f){this.listener=a;this.proxy=b;this.src=c;this.type=d;this.capture=!!e;this.handler=f;this.key=++Ha;this.removed=this.callOnce=!1};Ia.prototype.markAsRemoved=function(){this.removed=!0;this.handler=this.src=this.proxy=this.listener=null};var Q=function(a){this.src=a;this.listeners={};this.typeCount_=0};q=Q.prototype;q.add=function(a,b,c,d,e){var f=a.toString();a=this.listeners[f];a||(a=this.listeners[f]=[],this.typeCount_++);var h=Ja(a,b,d,e);-1<h?(b=a[h],c||(b.callOnce=!1)):(b=new Ia(b,null,this.src,f,!!d,e),b.callOnce=c,a.push(b));return b};
q.remove=function(a,b,c,d){a=a.toString();if(!(a in this.listeners))return!1;var e=this.listeners[a];b=Ja(e,b,c,d);return-1<b?(e[b].markAsRemoved(),Array.prototype.splice.call(e,b,1),0==e.length&&(delete this.listeners[a],this.typeCount_--),!0):!1};q.removeByKey=function(a){var b=a.type;if(!(b in this.listeners))return!1;var c=ka(this.listeners[b],a);c&&(a.markAsRemoved(),0==this.listeners[b].length&&(delete this.listeners[b],this.typeCount_--));return c};
q.removeAll=function(a){a=a&&a.toString();var b=0,c;for(c in this.listeners)if(!a||c==a){for(var d=this.listeners[c],e=0;e<d.length;e++)++b,d[e].markAsRemoved();delete this.listeners[c];this.typeCount_--}return b};q.getListener=function(a,b,c,d){a=this.listeners[a.toString()];var e=-1;a&&(e=Ja(a,b,c,d));return-1<e?a[e]:null};var Ja=function(a,b,c,d){for(var e=0;e<a.length;++e){var f=a[e];if(!f.removed&&f.listener==b&&f.capture==!!c&&f.handler==d)return e}return-1};var Ka="closure_lm_"+(1E6*Math.random()|0),La={},Ma=0,Oa=function(a,b,c,d,e){if(d&&d.once)return Na(a,b,c,d,e);if(w(b)==g){for(var f=0;f<b.length;f++)Oa(a,b[f],c,d,e);return null}c=Pa(c);return P(a)?a.listen(b,c,y(d)?!!d.capture:!!d,e):Qa(a,b,c,!1,d,e)},Qa=function(a,b,c,d,e,f){if(!b)throw Error("Invalid event type");var h=y(e)?!!e.capture:!!e,k=R(a);k||(a[Ka]=k=new Q(a));c=k.add(b,c,d,h,f);if(c.proxy)return c;d=Ra();c.proxy=d;d.src=a;d.listener=c;if(a.addEventListener)Ea||(e=h),void 0===e&&(e=!1),
a.addEventListener(b.toString(),d,e);else if(a.attachEvent)a.attachEvent(Sa(b.toString()),d);else throw Error("addEventListener and attachEvent are unavailable.");Ma++;return c},Ra=function(){var a=Ta,b=Ca?function(c){return a.call(b.src,b.listener,c)}:function(c){c=a.call(b.src,b.listener,c);if(!c)return c};return b},Na=function(a,b,c,d,e){if(w(b)==g){for(var f=0;f<b.length;f++)Na(a,b[f],c,d,e);return null}c=Pa(c);return P(a)?a.listenOnce(b,c,y(d)?!!d.capture:!!d,e):Qa(a,b,c,!0,d,e)},Ua=function(a,
b,c,d,e){if(w(b)==g){for(var f=0;f<b.length;f++)Ua(a,b[f],c,d,e);return null}d=y(d)?!!d.capture:!!d;c=Pa(c);if(P(a))return a.unlisten(b,c,d,e);if(!a)return!1;if(a=R(a))if(b=a.getListener(b,c,d,e))return Va(b);return!1},Va=function(a){if(typeof a==n||!a||a.removed)return!1;var b=a.src;if(P(b))return b.unlistenByKey(a);var c=a.type,d=a.proxy;b.removeEventListener?b.removeEventListener(c,d,a.capture):b.detachEvent&&b.detachEvent(Sa(c),d);Ma--;(c=R(b))?(c.removeByKey(a),0==c.typeCount_&&(c.src=null,b[Ka]=
null)):a.markAsRemoved();return!0},Wa=function(a,b){if(!a)return 0;if(P(a))return a.removeAllListeners(b);a=R(a);if(!a)return 0;var c=0;b=b&&b.toString();for(var d in a.listeners)if(!b||d==b)for(var e=a.listeners[d].concat(),f=0;f<e.length;++f)Va(e[f])&&++c;return c},Sa=function(a){return a in La?La[a]:La[a]="on"+a},Ya=function(a,b,c,d){var e=!0;if(a=R(a))if(b=a.listeners[b.toString()])for(b=b.concat(),a=0;a<b.length;a++){var f=b[a];f&&f.capture==c&&!f.removed&&(f=Xa(f,d),e=e&&!1!==f)}return e},Xa=
function(a,b){var c=a.listener,d=a.handler||a.src;a.callOnce&&Va(a);return c.call(d,b)},Ta=function(a,b){if(a.removed)return!0;if(!Ca){if(!b)a:{b=["window","event"];for(var c=t,d=0;d<b.length;d++)if(c=c[b[d]],null==c){b=null;break a}b=c}d=b;b=new O(d,this);c=!0;if(!(0>d.keyCode||void 0!=d.returnValue)){a:{var e=!1;if(0==d.keyCode)try{d.keyCode=-1;break a}catch(h){e=!0}if(e||void 0==d.returnValue)d.returnValue=!0}d=[];for(e=b.currentTarget;e;e=e.parentNode)d.push(e);a=a.type;for(e=d.length-1;!b.propagationStopped_&&
0<=e;e--){b.currentTarget=d[e];var f=Ya(d[e],a,!0,b);c=c&&f}for(e=0;!b.propagationStopped_&&e<d.length;e++)b.currentTarget=d[e],f=Ya(d[e],a,!1,b),c=c&&f}return c}return Xa(a,new O(b,this))},R=function(a){a=a[Ka];return a instanceof Q?a:null},Za="__closure_events_fn_"+(1E9*Math.random()>>>0),Pa=function(a){if(w(a)==m)return a;a[Za]||(a[Za]=function(b){return a.handleEvent(b)});return a[Za]};var S=function(){M.call(this);this.eventTargetListeners_=new Q(this);this.actualEventTarget_=this;this.parentEventTarget_=null};A(S,M);S.prototype[Ga]=!0;q=S.prototype;q.addEventListener=function(a,b,c,d){Oa(this,a,b,c,d)};q.removeEventListener=function(a,b,c,d){Ua(this,a,b,c,d)};
q.dispatchEvent=function(a){var b=this.parentEventTarget_;if(b){var c=[];for(var d=1;b;b=b.parentEventTarget_)c.push(b),++d}b=this.actualEventTarget_;d=a.type||a;if(u(a))a=new N(a,b);else if(a instanceof N)a.target=a.target||b;else{var e=a;a=new N(d,b);ra(a,e)}e=!0;if(c)for(var f=c.length-1;!a.propagationStopped_&&0<=f;f--){var h=a.currentTarget=c[f];e=h.fireListeners(d,!0,a)&&e}a.propagationStopped_||(h=a.currentTarget=b,e=h.fireListeners(d,!0,a)&&e,a.propagationStopped_||(e=h.fireListeners(d,!1,
a)&&e));if(c)for(f=0;!a.propagationStopped_&&f<c.length;f++)h=a.currentTarget=c[f],e=h.fireListeners(d,!1,a)&&e;return e};q.disposeInternal=function(){S.superClass_.disposeInternal.call(this);this.removeAllListeners();this.parentEventTarget_=null};q.listen=function(a,b,c,d){return this.eventTargetListeners_.add(String(a),b,!1,c,d)};q.listenOnce=function(a,b,c,d){return this.eventTargetListeners_.add(String(a),b,!0,c,d)};
q.unlisten=function(a,b,c,d){return this.eventTargetListeners_.remove(String(a),b,c,d)};q.unlistenByKey=function(a){return this.eventTargetListeners_.removeByKey(a)};q.removeAllListeners=function(a){return this.eventTargetListeners_?this.eventTargetListeners_.removeAll(a):0};
q.fireListeners=function(a,b,c){a=this.eventTargetListeners_.listeners[String(a)];if(!a)return!0;a=a.concat();for(var d=!0,e=0;e<a.length;++e){var f=a[e];if(f&&!f.removed&&f.capture==b){var h=f.listener,k=f.handler||f.src;f.callOnce&&this.unlistenByKey(f);d=!1!==h.call(k,c)&&d}}return d&&0!=c.returnValue_};q.getListener=function(a,b,c,d){return this.eventTargetListeners_.getListener(String(a),b,c,d)};var $a=function(a,b){b.preventDefault();a(b);return!1};var ab=function(a){a=a.className;return u(a)&&a.match(/\S+/g)||[]},bb=function(a,b){for(var c=ab(a),d=la(arguments,1),e=c.length+d.length,f=0;f<d.length;f++)C(c,d[f])||c.push(d[f]);a.className=c.join(" ");return c.length==e},db=function(a,b){var c=ab(a),d=la(arguments,1),e=cb(c,d);a.className=e.join(" ");return e.length==c.length-d.length},cb=function(a,b){return ia(a,function(a){return!C(b,a)})},eb=function(a,b){var c=!C(ab(a),b);c?bb(a,b):db(a,b);return c};!G&&!F||F&&9<=Number(Aa)||G&&L("1.9.1");var fb=F&&!L("9");var T=function(a,b,c,d){a=d||a;b=b&&"*"!=b?String(b).toUpperCase():"";if(a.querySelectorAll&&a.querySelector&&(b||c))return a.querySelectorAll(b+(c?"."+c:""));if(c&&a.getElementsByClassName){a=a.getElementsByClassName(c);if(b){d={};for(var e=0,f=0,h;h=a[f];f++)b==h.nodeName&&(d[e++]=h);d.length=e;return d}return a}a=a.getElementsByTagName(b||"*");if(c){d={};for(f=e=0;h=a[f];f++)b=h.className,typeof b.split==m&&C(b.split(/\s+/),c)&&(d[e++]=h);d.length=e;return d}return a},gb={SCRIPT:1,STYLE:1,HEAD:1,
IFRAME:1,OBJECT:1},hb={IMG:" ",BR:"\n"},jb=function(a){if(fb&&null!==a&&"innerText"in a)a=a.innerText.replace(/(\r\n|\r|\n)/g,"\n");else{var b=[];ib(a,b,!0);a=b.join("")}a=a.replace(/ \xAD /g," ").replace(/\xAD/g,"");a=a.replace(/\u200B/g,"");fb||(a=a.replace(/ +/g," "));" "!=a&&(a=a.replace(/^\s*/,""));return a},ib=function(a,b,c){if(!(a.nodeName in gb))if(3==a.nodeType)c?b.push(String(a.nodeValue).replace(/(\r\n|\r|\n)/g,"")):b.push(a.nodeValue);else if(a.nodeName in hb)b.push(hb[a.nodeName]);else for(a=
a.firstChild;a;)ib(a,b,c),a=a.nextSibling};var U="StopIteration"in t?t.StopIteration:{message:"StopIteration",stack:""},V=function(){};V.prototype.next=function(){throw U;};V.prototype.__iterator__=function(){return this};
var kb=function(a){if(a instanceof V)return a;if(typeof a.__iterator__==m)return a.__iterator__(!1);if(x(a)){var b=0,c=new V;c.next=function(){for(;;){if(b>=a.length)throw U;if(b in a)return a[b++];b++}};return c}throw Error("Not implemented");},lb=function(a,b,c){if(x(a))try{ha(a,b,c)}catch(d){if(d!==U)throw d;}else{a=kb(a);try{for(;;)b.call(c,a.next(),void 0,a)}catch(d){if(d!==U)throw d;}}};var mb=function(a){return/^\s*$/.test(a)?!1:/^[\],:{}\s\u2028\u2029]*$/.test(a.replace(/\\["\\\/bfnrtu]/g,"@").replace(/(?:"[^"\\\n\r\u2028\u2029\x00-\x08\x0a-\x1f]*"|true|false|null|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?)[\s\u2028\u2029]*(?=:|,|]|}|$)/g,"]").replace(/(?:^|:|,)(?:[\s\u2028\u2029]*\[)+/g,""))},nb=function(a){a=String(a);if(mb(a))try{return eval("("+a+")")}catch(b){}throw Error("Invalid JSON string: "+a);};var ob=function(){};ob.prototype.cachedOptions_=null;ob.prototype.getOptions=function(){return this.cachedOptions_||(this.cachedOptions_=this.internalGetOptions())};var pb,W=function(){};A(W,ob);W.prototype.createInstance=function(){var a=this.getProgId_();return a?new ActiveXObject(a):new XMLHttpRequest};W.prototype.internalGetOptions=function(){var a={};this.getProgId_()&&(a[0]=!0,a[1]=!0);return a};
W.prototype.getProgId_=function(){if(!this.ieProgId_&&"undefined"==typeof XMLHttpRequest&&"undefined"!=typeof ActiveXObject){for(var a=["MSXML2.XMLHTTP.6.0","MSXML2.XMLHTTP.3.0","MSXML2.XMLHTTP","Microsoft.XMLHTTP"],b=0;b<a.length;b++){var c=a[b];try{return new ActiveXObject(c),this.ieProgId_=c}catch(d){}}throw Error("Could not create ActiveXObject. ActiveX might be disabled, or MSXML might not be installed");}return this.ieProgId_};pb=new W;var X=function(a,b){this.map_={};this.keys_=[];this.version_=this.count_=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else a&&this.addAll(a)};q=X.prototype;q.getValues=function(){this.cleanupKeysArray_();for(var a=[],b=0;b<this.keys_.length;b++)a.push(this.map_[this.keys_[b]]);return a};q.getKeys=function(){this.cleanupKeysArray_();return this.keys_.concat()};
q.remove=function(a){return Object.prototype.hasOwnProperty.call(this.map_,a)?(delete this.map_[a],this.count_--,this.version_++,this.keys_.length>2*this.count_&&this.cleanupKeysArray_(),!0):!1};
q.cleanupKeysArray_=function(){if(this.count_!=this.keys_.length){for(var a=0,b=0;a<this.keys_.length;){var c=this.keys_[a];Object.prototype.hasOwnProperty.call(this.map_,c)&&(this.keys_[b++]=c);a++}this.keys_.length=b}if(this.count_!=this.keys_.length){var d={};for(b=a=0;a<this.keys_.length;)c=this.keys_[a],Object.prototype.hasOwnProperty.call(d,c)||(this.keys_[b++]=c,d[c]=1),a++;this.keys_.length=b}};q.get=function(a,b){return Object.prototype.hasOwnProperty.call(this.map_,a)?this.map_[a]:b};
q.set=function(a,b){Object.prototype.hasOwnProperty.call(this.map_,a)||(this.count_++,this.keys_.push(a),this.version_++);this.map_[a]=b};q.addAll=function(a){if(a instanceof X){var b=a.getKeys();a=a.getValues()}else b=pa(a),a=oa(a);for(var c=0;c<b.length;c++)this.set(b[c],a[c])};q.forEach=function(a,b){for(var c=this.getKeys(),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};q.clone=function(){return new X(this)};q.getKeyIterator=function(){return this.__iterator__(!0)};
q.__iterator__=function(a){this.cleanupKeysArray_();var b=0,c=this.version_,d=this,e=new V;e.next=function(){if(c!=d.version_)throw Error("The map has changed since the iterator was created");if(b>=d.keys_.length)throw U;var e=d.keys_[b++];return a?e:d.map_[e]};return e};var qb=function(a){if(a.getValues&&typeof a.getValues==m)return a.getValues();if(u(a))return a.split("");if(x(a)){for(var b=[],c=a.length,d=0;d<c;d++)b.push(a[d]);return b}return oa(a)},rb=function(a,b,c){if(a.forEach&&typeof a.forEach==m)a.forEach(b,c);else if(x(a)||u(a))ha(a,b,c);else{if(a.getKeys&&typeof a.getKeys==m)var d=a.getKeys();else if(a.getValues&&typeof a.getValues==m)d=void 0;else if(x(a)||u(a)){d=[];for(var e=a.length,f=0;f<e;f++)d.push(f)}else d=pa(a);e=qb(a);f=e.length;for(var h=0;h<
f;h++)b.call(c,e[h],d&&d[h],a)}};var sb=function(a,b,c){if(w(a)==m)c&&(a=z(a,c));else if(a&&typeof a.handleEvent==m)a=z(a.handleEvent,a);else throw Error("Invalid listener argument");return 2147483647<Number(b)?-1:t.setTimeout(a,b||0)};var tb=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^/?#]*)@)?([^/#?]*?)(?::([0-9]+))?(?=[/#?]|$))?([^?#]+)?(?:\?([^#]*))?(?:#([\s\S]*))?$/;var Y=function(a){S.call(this);this.headers=new X;this.xmlHttpFactory_=a||null;this.active_=!1;this.xhrOptions_=this.xhr_=null;this.lastUri_="";this.inAbort_=this.inOpen_=this.inSend_=this.errorDispatched_=!1;this.timeoutInterval_=0;this.timeoutId_=null;this.responseType_="";this.useXhr2Timeout_=this.progressEventsEnabled_=this.withCredentials_=!1};A(Y,S);
var ub=/^https?$/i,vb=["POST","PUT"],wb=[],xb=function(a,b,c,d,e,f,h){var k=new Y;wb.push(k);b&&k.listen(l,b);k.listenOnce("ready",k.cleanupSend_);f&&k.setTimeoutInterval(f);h&&k.setWithCredentials(h);k.send(a,c,d,e);return k};Y.prototype.cleanupSend_=function(){this.dispose();ka(wb,this)};Y.prototype.setTimeoutInterval=function(a){this.timeoutInterval_=Math.max(0,a)};Y.prototype.setWithCredentials=function(a){this.withCredentials_=a};
Y.prototype.send=function(a,b,c,d){if(this.xhr_)throw Error("[goog.net.XhrIo] Object is active with another request="+this.lastUri_+"; newUri="+a);b=b?b.toUpperCase():"GET";this.lastUri_=a;this.errorDispatched_=!1;this.active_=!0;this.xhr_=this.createXhr();this.xhrOptions_=this.xmlHttpFactory_?this.xmlHttpFactory_.getOptions():pb.getOptions();this.xhr_.onreadystatechange=z(this.onReadyStateChange_,this);this.progressEventsEnabled_&&"onprogress"in this.xhr_&&(this.xhr_.onprogress=z(function(a){this.onProgressHandler_(a,
!0)},this),this.xhr_.upload&&(this.xhr_.upload.onprogress=z(this.onProgressHandler_,this)));try{this.inOpen_=!0,this.xhr_.open(b,String(a),!0),this.inOpen_=!1}catch(f){this.error_(5,f);return}a=c||"";var e=this.headers.clone();d&&rb(d,function(a,b){e.set(b,a)});d=ja(e.getKeys(),yb);c=t.FormData&&a instanceof t.FormData;!C(vb,b)||d||c||e.set("Content-Type","application/x-www-form-urlencoded;charset=utf-8");e.forEach(function(a,b){this.xhr_.setRequestHeader(b,a)},this);this.responseType_&&(this.xhr_.responseType=
this.responseType_);"withCredentials"in this.xhr_&&this.xhr_.withCredentials!==this.withCredentials_&&(this.xhr_.withCredentials=this.withCredentials_);try{this.cleanUpTimeoutTimer_(),0<this.timeoutInterval_&&((this.useXhr2Timeout_=zb(this.xhr_))?(this.xhr_.timeout=this.timeoutInterval_,this.xhr_.ontimeout=z(this.timeout_,this)):this.timeoutId_=sb(this.timeout_,this.timeoutInterval_,this)),this.inSend_=!0,this.xhr_.send(a),this.inSend_=!1}catch(f){this.error_(5,f)}};
var zb=function(a){return F&&L(9)&&typeof a.timeout==n&&void 0!==a.ontimeout},yb=function(a){return"content-type"==a.toLowerCase()};q=Y.prototype;q.createXhr=function(){return this.xmlHttpFactory_?this.xmlHttpFactory_.createInstance():pb.createInstance()};q.timeout_=function(){"undefined"!=typeof r&&this.xhr_&&(this.dispatchEvent("timeout"),this.abort(8))};q.error_=function(){this.active_=!1;this.xhr_&&(this.inAbort_=!0,this.xhr_.abort(),this.inAbort_=!1);this.dispatchErrors_();this.cleanUpXhr_()};
q.dispatchErrors_=function(){this.errorDispatched_||(this.errorDispatched_=!0,this.dispatchEvent(l),this.dispatchEvent("error"))};q.abort=function(){this.xhr_&&this.active_&&(this.active_=!1,this.inAbort_=!0,this.xhr_.abort(),this.inAbort_=!1,this.dispatchEvent(l),this.dispatchEvent("abort"),this.cleanUpXhr_())};q.disposeInternal=function(){this.xhr_&&(this.active_&&(this.active_=!1,this.inAbort_=!0,this.xhr_.abort(),this.inAbort_=!1),this.cleanUpXhr_(!0));Y.superClass_.disposeInternal.call(this)};
q.onReadyStateChange_=function(){if(!this.disposed_)if(this.inOpen_||this.inSend_||this.inAbort_)this.onReadyStateChangeHelper_();else this.onReadyStateChangeEntryPoint_()};q.onReadyStateChangeEntryPoint_=function(){this.onReadyStateChangeHelper_()};
q.onReadyStateChangeHelper_=function(){if(this.active_&&"undefined"!=typeof r&&(!this.xhrOptions_[1]||4!=this.getReadyState()||2!=this.getStatus()))if(this.inSend_&&4==this.getReadyState())sb(this.onReadyStateChange_,0,this);else if(this.dispatchEvent("readystatechange"),this.isComplete()){this.active_=!1;try{this.isSuccess()?(this.dispatchEvent(l),this.dispatchEvent("success")):this.dispatchErrors_()}finally{this.cleanUpXhr_()}}};
q.onProgressHandler_=function(a,b){this.dispatchEvent(Ab(a,"progress"));this.dispatchEvent(Ab(a,b?"downloadprogress":"uploadprogress"))};var Ab=function(a,b){return{type:b,lengthComputable:a.lengthComputable,loaded:a.loaded,total:a.total}};q=Y.prototype;q.cleanUpXhr_=function(a){if(this.xhr_){this.cleanUpTimeoutTimer_();var b=this.xhr_,c=this.xhrOptions_[0]?v:null;this.xhrOptions_=this.xhr_=null;a||this.dispatchEvent("ready");try{b.onreadystatechange=c}catch(d){}}};
q.cleanUpTimeoutTimer_=function(){this.xhr_&&this.useXhr2Timeout_&&(this.xhr_.ontimeout=null);this.timeoutId_&&(t.clearTimeout(this.timeoutId_),this.timeoutId_=null)};q.isComplete=function(){return 4==this.getReadyState()};q.isSuccess=function(){var a=this.getStatus();a:switch(a){case 200:case 201:case 202:case 204:case 206:case 304:case 1223:var b=!0;break a;default:b=!1}return b||0===a&&!this.isLastUriEffectiveSchemeHttp_()};
q.isLastUriEffectiveSchemeHttp_=function(){var a=String(this.lastUri_).match(tb)[1]||null;!a&&t.self&&t.self.location&&(a=t.self.location.protocol,a=a.substr(0,a.length-1));return ub.test(a?a.toLowerCase():"")};q.getReadyState=function(){return this.xhr_?this.xhr_.readyState:0};q.getStatus=function(){try{return 2<this.getReadyState()?this.xhr_.status:-1}catch(a){return-1}};
q.getResponseJson=function(a){if(this.xhr_){var b=this.xhr_.responseText;a&&0==b.indexOf(a)&&(b=b.substring(a.length));a:{a=b;if(t.JSON)try{var c=t.JSON.parse(a);break a}catch(d){}c=nb(a)}return c}};var Z=function(a,b){this.entityId_=encodeURIComponent(a);b?this.sender_=b:(this.sender_=Y,this.sender_.send=xb);this.writeToken_="";this.options_={};this.counts_={};this.decodeLabel_={};this.selectedReactions_=new X};q=Z.prototype;
q.initialize=function(a){a=T(document,"a","rx-option",document.getElementById(a));for(var b=0;b<a.length;b++){var c=a[b],d=jb(T(document,"span","rx-label",c)[0]);this.options_[d]=c;var e=this.encodeLabel_(d);this.decodeLabel_[e]=d;e=c;var f=z(this.toggle,this,d);Oa(e,"click",da($a,f));c=T(document,"span","rx-count",c)[0];d=this.counts_[d]=c;if("textContent"in d)d.textContent="0";else if(3==d.nodeType)d.data="0";else if(d.firstChild&&3==d.firstChild.nodeType){for(;d.lastChild!=d.firstChild;)d.removeChild(d.lastChild);
d.firstChild.data="0"}else{for(e=d;c=e.firstChild;)e.removeChild(c);d.appendChild((9==d.nodeType?d:d.ownerDocument||d.document).createTextNode("0"))}}a=z(this.displayRetrievedAnnotations_,this);b=z(this.disableOptions_,this);this.loadExistingReactions_(a,b)};q.setZipitToken_=function(a){this.writeToken_=a};
q.loadZipitToken_=function(a){var b=z(this.disableOptions_,this),c=z(this.setZipitToken_,this),d=z(this.toggle,this);this.sender_.send("//www.blogger.com/reviews/json/token",function(){if(this.isSuccess()){var e=this.getResponseJson();c(e.channelHeader.token);a&&d(a)}else b()},"POST",'req={"applicationId":34}')};
q.loadExistingReactions_=function(a,b){this.sender_.send("//www.blogger.com/reviews/json/aggregates",function(){this.isSuccess()?a(this.getResponseJson()):b()},"POST",'req={"entities":[{"url": "'+this.entityId_+'","groups":["reactions"]},{"url": "'+this.entityId_+'"}],"applicationId":34}')};
q.displayRetrievedAnnotations_=function(a){if(a.entityAggregates)for(var b=0;b<a.entityAggregates.length;b++){var c;if(c=a.entityAggregates[b].labels)for(var d=0;d<c.length;d++){var e=this.counts_[this.decodeLabel_[c[d].label]];if(e){var f=parseInt(jb(e),10);isNaN(f)&&(f=0);e.innerHTML=f+parseInt(c[d].count,10)}}}};q.encodeLabel_=function(a){a=a.replace(/([^A-Za-z ])/g,function(a){return"_"+a.charCodeAt(0)});return a=a.replace(/([A-Z])/g,function(a){return"_"+a.toLowerCase()})};
q.disableOptions_=function(){for(var a=T(document,"a","rx-option",document.getElementById("rx-holder")),b=0;b<a.length;b++){var c=a[b];c.style.borderColor=null;Wa(c)}};
q.toggle=function(a){if(""==this.writeToken_)this.loadZipitToken_(a);else{if(this.selectedReactions_.get(a)){var b=!1;this.selectedReactions_.remove(a)}else b=!0,this.selectedReactions_.set(a,!0);var c="";lb(this.selectedReactions_.getKeyIterator(),function(a){c=c+'"'+this.encodeLabel_(a)+'", '},this);this.sender_.send("//www.blogger.com/reviews/json/write",v,"POST",'req={"annotations": [ {"replaceAllLabels":true,"entity": {"url": "'+this.entityId_+'","groups":["reactions"]},"labels":['+c+']}],"applicationId":34}&token='+
this.writeToken_);var d=this.options_[a];if(d){a=this.counts_[a];var e=parseInt(jb(a),10);isNaN(e)&&(e=0);a.innerHTML=b?e+1:e-1;eb(d,"rx-checked");eb(d,"rx-unchecked")}}};aa("BLOG_Annotator",Z,void 0);Z.prototype.initialize=Z.prototype.initialize;aa("BLOG_listenOnce",Na,void 0);}).call(this);
