<template>
  <div class="home">
    <img alt="Vue logo" src="../assets/logo.png">
    <hello-world :childData="parentData"></hello-world>
  </div>
</template>

<script>
// @ is an alias to /src
import HelloWorld from '../components/HelloWorld.vue'

export default {
  name: 'home',
  components: {
    HelloWorld
  },
  data () {
    return {
      parentData: {
        aas: [
        'vue',
        '어렵다',
        '이것도 쉬운 편이다',
      ], //aa=[vue, 어렵다, 이것도 쉬운 편이다]
      isLoading: false,
      }
    }
  }
  
}
</script>
