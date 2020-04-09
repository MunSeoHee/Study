<template>
  <div class="hello">
    <div v-if="childData.isLoading">    
      <div v-for="aa in childData.aas" :key="aa">
        {{aa}}
      </div>
    </div>
    <div v-else>
      <span>dddd</span>
    </div>
  </div>
</template>

<script>
export default {
  name: 'HelloWorld',
  props: {
    msg: String,
    childData: Object
  }
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped lang="scss">
h3 {
  margin: 40px 0 0;
}
ul {
  list-style-type: none;
  padding: 0;
}
li {
  display: inline-block;
  margin: 0 10px;
}
a {
  color: #42b983;
}
</style>
